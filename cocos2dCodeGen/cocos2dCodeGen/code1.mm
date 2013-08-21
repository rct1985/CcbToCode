//
//  code1.m
//  cocos2dCodeGen
//
//  Created by user on 13-4-25.
//  Copyright (c) 2013年 user. All rights reserved.
//

#import "code1.h"


@implementation code1
@synthesize baseClassName = m_baseClassName;
@synthesize className = m_className;
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
    
    if (assignMemberName != "") {
        if (cutomClassName == "") {
            m_listAssignMember.push_back(TypeName(baseClassNmae,assignMemberName));

        }
        else
        {
            m_listAssignMember.push_back(TypeName(cutomClassName,assignMemberName));

        }
    }

    // Properties
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
            if (menuCallback ) {
                m_listMenuCallBack.push_back([menuCallback UTF8String]);
 
            }
        }
        else if ([type isEqualToString:@"BlockCCControl"])
        {
            NSString* cccallback = [value objectAtIndex:0];
            if (cccallback) {
                m_listCContorlCallBack.push_back([cccallback UTF8String]);
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
    m_className = [className UTF8String];
    m_baseClassName = [[nodeGraph objectForKey:@"baseClass"] UTF8String];
    if (m_className == "") {
        return;
    }
    [self parserContent:nodeGraph];
    
    //[self addToStringCache:[node objectForKey:@"customClass"] isPath:NO];
    //[self addToStringCache:[node objectForKey:@"memberVarAssignmentName"] isPath:NO];
    

}

@end
