//
//  code1.m
//  cocos2dCodeGen
//
//  Created by user on 13-4-25.
//  Copyright (c) 2013年 user. All rights reserved.
//

#import "code1.h"

enum{
    Code_DonotAssign,
    Code_Root_Var,
    Code_Owner,
};

enum{
    Target_None,
    Target_Root_Var,
    Target_Owner,
};

@implementation code1
@synthesize baseClassName = m_baseClassName;
@synthesize className = m_className;
@synthesize pureClassName = m_pureClassName;
@synthesize asMember = m_listAssignMember;
@synthesize cuMember = m_listCutomProperty;
@synthesize controlCalls = m_listCContorlCallBack;
@synthesize menuCalls = m_listMenuCallBack;


-(void) parserContent:(NSDictionary*) node
{
    std::string baseClassNmae = "";    
    std::string assignMemberName = "";
    std::string cutomClassName ="";
    
    if ([node objectForKey:@"baseClass"] != nil) {
        baseClassNmae  = [[node objectForKey:@"baseClass"] UTF8String];
    }
    if([node objectForKey:@"customClass"])
    {
        cutomClassName = [[node objectForKey:@"customClass"] UTF8String];
    }
        
    if ([node objectForKey:@"memberVarAssignmentName"]) {
       assignMemberName =  [[node objectForKey:@"memberVarAssignmentName"]UTF8String];
        
    }
    
    int l_iCodeType = (int)[[node objectForKey:@"memberVarAssignmentType"] integerValue];
    
    if (assignMemberName != "") {
        if (cutomClassName == "") {
            m_listAssignMember.push_back(TypeName(baseClassNmae,assignMemberName));
            if(l_iCodeType != Code_Root_Var){
                NSLog(@"\nWaning... AssignmentType != Code_Root_Var  \t\"%s >> %s\" ", m_className.c_str(), assignMemberName.c_str());
            }
        }
        else
        {
            m_listAssignMember.push_back(TypeName(cutomClassName,assignMemberName));
            if(l_iCodeType != Code_Root_Var){
                NSLog(@"Waning... AssignmentType != Code_Root_Var \t\"%s -> %s\" -->", m_className.c_str(), assignMemberName.c_str());
            }
        }
    }

    //Properties
    NSArray* props = [node objectForKey:@"properties"];
    for (int i = 0; i < [props count]; i++)
    {
        NSDictionary* prop = [props objectAtIndex:i];
        if ([prop objectForKey:@"name"] == nil) {
            continue;
        }
        std::string propName =  [[prop objectForKey:@"name"] UTF8String];

        id value = [prop objectForKey:@"value"];
        NSString* type = [prop objectForKey:@"type"];

        if ([type isEqualToString:@"Block"])
        {
            NSString* menuCallback = [value objectAtIndex:0];
            int l_iTargetType = [[value objectAtIndex:1] intValue];
            if (menuCallback ) {
                //>=-Rct-=< only the new one is pushed back here
                std::string l_strContent = [menuCallback UTF8String];
                std::vector<std::string>::iterator l_iter = std::find(m_listMenuCallBack.begin(), m_listMenuCallBack.end(), l_strContent);
                if(l_iter == m_listMenuCallBack.end()){
                    m_listMenuCallBack.push_back([menuCallback UTF8String]);
                    if(l_iTargetType != Target_Root_Var){
                        if([menuCallback isEqualToString:@""]){
                            NSLog(@"Warning... blockMenu without selector name \t\"%s -> %@\"", m_className.c_str(), menuCallback);
                        }else{
                            NSLog(@"Waning... blockMenu AssignmentType != Target_Root_Var \t\"%s -> %@\"", m_className.c_str(), menuCallback);
                        }
                        
                    }
                }
            }
        }
        else if ([type isEqualToString:@"BlockCCControl"])
        {
            NSString* cccallback = [value objectAtIndex:0];
            int l_iTargetType = [[value objectAtIndex:1] intValue];
            
            if (cccallback) {
                //>=-Rct-=< only the new one is pushed back here
                std::string l_strContent = [cccallback UTF8String];
                std::vector<std::string>::iterator l_iter = std::find(m_listCContorlCallBack.begin(), m_listCContorlCallBack.end(), l_strContent);
                if(l_iter == m_listCContorlCallBack.end()){
                    m_listCContorlCallBack.push_back([cccallback UTF8String]);
                    if(l_iTargetType != Target_Root_Var){
                        if([cccallback isEqualToString:@""]){
                            NSLog(@"Warning... blockMenuControl without selector name \t\"%s -> %@\"", m_className.c_str(), cccallback);
                        }else{
                            NSLog(@"Waning... blockMenuControl AssignmentType != Target_Root_Var \t\"%s -> %@\"", m_className.c_str(), cccallback);
                        }
                    }
                }
            }
        }
    }
    
    // Custom properties
    NSArray* customProps = [node objectForKey:@"customProperties"];
    for (NSDictionary* customProp in customProps)
    {
        std::string cName = [[customProp objectForKey:@"name"] UTF8String];
        
        int customType = [[customProp objectForKey:@"type"] intValue];
        //std::string value = [[customProp objectForKey:@"value"] UTF8String];
        if (customType == kCCBCustomPropTypeInt) {
            m_listCutomProperty.push_back(TypeName("int",cName));
        }
        else if(customType == kCCBCustomPropTypeBool)
        {
            m_listCutomProperty.push_back(TypeName("bool",cName));
        }
        else if(customType == kCCBCustomPropTypeString)
        {
            m_listCutomProperty.push_back(TypeName("std::string",cName));
        }
        else if(customType == kCCBCustomPropTypeFloat)
        {
            m_listCutomProperty.push_back(TypeName("float",cName));
        }


    }
        // Children
    NSArray* children = [node objectForKey:@"children"];
    for (int i = 0; i < [children count]; i++)
    {
        [self parserContent:[children objectAtIndex:i]];
    }

}

-(void) parserWithFile:(NSString *)path
{
    NSDictionary		*doc = [NSDictionary dictionaryWithContentsOfFile:path];
    
    NSDictionary* nodeGraph = [doc objectForKey:@"nodeGraph"];
    NSString* className = [nodeGraph objectForKey:@"customClass"];
    if (className == nil) {
        return;
    }
    
    if([className length] <= 4){
        NSLog(@"%@ without suffix _CCB", path);
        return ;
    }
    
    m_className = [className UTF8String];
    //>=-Rct-=<
    m_pureClassName = [[className substringToIndex:[className length] - 4] UTF8String];
    
    m_baseClassName = [[nodeGraph objectForKey:@"baseClass"] UTF8String];
    if (m_className == "") {
        return;
    }
    [self parserContent:nodeGraph];
    
    //[self addToStringCache:[node objectForKey:@"customClass"] isPath:NO];
    //[self addToStringCache:[node objectForKey:@"memberVarAssignmentName"] isPath:NO];
    

}

@end
