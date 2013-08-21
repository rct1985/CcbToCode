//
//  utility.h
//  cocos2dCodeGen
//
//  Created by user on 13-4-25.
//  Copyright (c) 2013年 user. All rights reserved.
//

#ifndef cocos2dCodeGen_utility_h
#define cocos2dCodeGen_utility_h
#include <string>
#import <Cocoa/Cocoa.h>

struct TypeName {
    TypeName(const std::string& t="",const std::string& n="")
    :type(t),name(n){}
    std::string type;
    std::string name;
};
enum
{
    kCCBCustomPropTypeInt = 0,
    kCCBCustomPropTypeFloat,
    kCCBCustomPropTypeBool,
    kCCBCustomPropTypeString,
};



#endif
