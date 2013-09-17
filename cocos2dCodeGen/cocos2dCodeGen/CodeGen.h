//
//  CodeGen.h
//  cocos2dCodeGen
//
//  Created by user on 13-4-25.
//  Copyright (c) 2013年 user. All rights reserved.
//

#ifndef __cocos2dCodeGen__CodeGen__
#define __cocos2dCodeGen__CodeGen__

#include <iostream>
#include "utility.h"
#include <vector>

class CodeGen
{
public:
    std::string m_className;                        //要生成的类名
    std::string m_pureClassName;                    //要生成的类名，没有_CCB
    std::string m_ctrlClassPointMember;             //指针成员
    std::string m_baseClass;                        //生成类的父类
    std::vector<TypeName> m_listAssignMember;       //需要赋值的场景对象
    std::vector<TypeName> m_listCutomProperty;      //需要赋值的自定义变量
    std::vector<std::string> m_listCContorlCallBack;//menu回调函数名
    std::vector<std::string> m_listMenuCallBack;    //control回调函数名
    
    
    void GenerateHeaderFile()
    {
        GenerateClassDec();
        GenerateInterfaceDec();
        GenerateCallBackControlDec();
        GenerateCallBackMenuDec();
        GenerateAssignMemberDec();
        GenerateVisitMemberDefine();
        GenerateCustomMemberDec();
        GenerateCtrlClassDec();
        GeneateClassEnd();
        
        GenerateCtrlClassHeadFile();
    }
    void GenerateCppFile()
    {
        GenerateCppHeader();
        GenerateCallBackControl();
        GenerateCallBackMenu();
        GlueMenuCallBack();
        GlueControlCallBack();
        GlueAssignMember();
        GlueCustomMember();
        
        GenerateCtrlClassCppFile();

    }
    CodeGen(std::ostream& h,std::ostream& c);
    CodeGen(std::ostream& p_head, std::ostream& p_cpp, std::ostream& p_ctrlHead, std::ostream& p_ctrlCpp);
    void init();
private:
#pragma mark HeadFile
    //header file
    void GenerateClassDec();
    void GenerateInterfaceDec();
    void GenerateCallBackControlDec();
    void GenerateCallBackMenuDec();
    void GenerateAssignMemberDec();
    void GenerateVisitMemberDefine();
    void GenerateCustomMemberDec();
    void GenerateCtrlClassDec();
    void GeneateClassEnd();
    
    void GenerateCtrlClassHeadFile();
    
#pragma mark cpp File
    //cpp file
    void GenerateCppHeader();
    void GenerateCallBackControl();
    void GenerateCallBackMenu();

    void GlueMenuCallBack();
    void GlueControlCallBack();
    void GlueAssignMember();
    void GlueCustomMember();
    //void GeneateClass();
    void GenerateCtrlClassCppFile();

#pragma mark members
    std::ostream& m_header;
    std::ostream& m_cpp;
    
    std::ostream& m_ctrlHeader;
    std::ostream& m_ctrlCpp;
    

};

#endif /* defined(__cocos2dCodeGen__CodeGen__) */
