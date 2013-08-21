//
//  main.cpp
//  cocos2dCodeGen
//
//  Created by user on 13-4-25.
//  Copyright (c) 2013年 user. All rights reserved.
//

#include <iostream>
#import "code1.h"
#include "CodeGen.h"
#include <fstream>


void GenerateToTargetDic(NSString* path, NSString* p_targetDir)
{
    code1* c = [[code1 alloc] init];
    [c parserWithFile:path];
    
    std::ofstream header,cpp;
    
    //std::string dir = [path UTF8String];
    //std::size_t pos = dir.find_last_of('/');
    //dir = dir.substr(0,pos+1);
    //dir += [p_targetDir UTF8String];
    std::string dir = [p_targetDir UTF8String];
    NSFileManager * manager = [NSFileManager defaultManager];
    if (![manager fileExistsAtPath:[NSString stringWithFormat:@"%s",dir.c_str() ]]) {
        NSError* error;
        [manager createDirectoryAtPath:[NSString stringWithFormat:@"%s",dir.c_str()] withIntermediateDirectories:YES attributes:nil error:&error];
    }
    dir += c.className;
    header.open(dir + ".h");
    cpp.open(dir + ".cpp");
    CodeGen gn(header,cpp);
    gn.m_className = c.className;
    gn.m_baseClass = c.baseClassName;
    gn.m_listMenuCallBack = c.menuCalls;
    gn.m_listCContorlCallBack = c.controlCalls;
    gn.m_listCutomProperty = c.cuMember;
    gn.m_listAssignMember = c.asMember;
    gn.GenerateHeaderFile();
    gn.GenerateCppFile();
 
}


void Generate(NSString* path){
    GenerateToTargetDic(path, @"./");
}

int main(int argc, const char * argv[])
{
    

    NSFileManager *fileManager = [NSFileManager defaultManager];
    //在这里获取应用程序Documents文件夹里的文件及文件夹列表
    NSString* currentDir = [[NSBundle mainBundle] bundlePath];
    NSString* ccbDir  = [NSString stringWithFormat:@"%s", argv[1]];
    NSString* targetDir = [NSString stringWithFormat:@"%s", argv[2]];
    NSLog(@"current dir:%@",currentDir);
    NSLog(@"ccbDir dir:%@",ccbDir);
    NSLog(@"targetDir dir:%@",targetDir);
    

    NSError *error = nil;
    //NSArray *fileList = [[NSArray alloc] init];
    //fileList便是包含有该文件夹下所有文件的文件名及文件夹名的数组
    NSArray* fileList = [fileManager contentsOfDirectoryAtPath:ccbDir error:&error];
    
    //以下这段代码则可以列出给定一个文件夹里的所有子文件夹名
    
    NSMutableArray *ccbFiles = [[NSMutableArray alloc] init];
    
    //在上面那段程序中获得的fileList中列出文件夹名
    for (NSString *file in fileList) {
        if ([[file pathExtension] isEqual: @"ccb"]) {
            NSString *path = [ccbDir stringByAppendingPathComponent:file];
            [ccbFiles addObject:path];
        }
    }
    //NSLog(@"Every Thing in the dir:%@",fileList);
    NSLog(@"All folders:%@",ccbFiles);
    for (NSString* ccb in ccbFiles) {
        if(argc > 2){
            GenerateToTargetDic(ccb, targetDir);
        }else{
            Generate(ccb);
        }
    }
    return 0;
}

