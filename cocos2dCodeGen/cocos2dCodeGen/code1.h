//
//  code1.h
//  cocos2dCodeGen
//
//  Created by user on 13-4-25.
//  Copyright (c) 2013年 user. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#include <string>
#include <vector>
#include "utility.h"

@interface code1 : NSObject
{
    std::string m_baseClassName;
    std::string m_className;
    std::string m_pureClassName;
    std::vector<TypeName> m_listAssignMember;
    std::vector<TypeName> m_listCutomProperty;
    std::vector<std::string> m_listCContorlCallBack;
    std::vector<std::string> m_listMenuCallBack;
}

@property std::string baseClassName;
@property std::string className;
@property std::string pureClassName;
@property std::vector<TypeName> asMember;
@property std::vector<TypeName> cuMember;
@property std::vector<std::string> controlCalls;
@property std::vector<std::string> menuCalls;
-(void) parserWithFile:(NSString*) path;
//-(void) parserContent:(NSDictionary*) node;
@end
