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

//定义用于支持cocos2dx_3
#define Cocos2dX_3

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
#ifdef Cocos2dX_3
        preProcess_cocos2dx_3();
#endif
        
        GenerateClassDec();
        GenerateInterfaceDec();
        GenerateCallBackControlDec(false);
        GenerateCallBackMenuDec(false);
        GenerateAssignMemberDec();
        GenerateVisitMemberDefine();
        GenerateCustomMemberDec();
        GenerateCtrlClassDec();
        GeneateClassEnd();
        
        GenerateCtrlClassHeadFile();
        GenerateCallBackControlDec(true);
        GenerateCallBackMenuDec(true);
        GenerateCtrlClassEndFile();
    }
    void GenerateCppFile()
    {
        GenerateCppHeader();
        GenerateCallBackControl(false);
        GenerateCallBackMenu(false);
        GlueMenuCallBack();
        GlueControlCallBack();
        GlueAssignMember();
        GlueCustomMember();
        
        GenerateCtrlClassCppFile();
        GenerateCallBackControl(true);
        GenerateCallBackMenu(true);
    }
    CodeGen(std::ostream& h,std::ostream& c);
    CodeGen(std::ostream& p_head, std::ostream& p_cpp, std::ostream& p_ctrlHead, std::ostream& p_ctrlCpp);
    void init();
private:
#pragma mark cocos2dx_3
    void preProcess_cocos2dx_3();
    
#pragma mark HeadFile
    //header file
    void GenerateClassDec();
    void GenerateInterfaceDec();
    void GenerateCallBackControlDec(bool p_bIsCtrlClass);
    void GenerateCallBackMenuDec(bool p_bIsCtrlClass);
    void GenerateAssignMemberDec();
    void GenerateVisitMemberDefine();
    void GenerateCustomMemberDec();
    void GenerateCtrlClassDec();
    void GeneateClassEnd();
    
    void GenerateCtrlClassHeadFile();
    void GenerateCtrlClassEndFile();
    
#pragma mark cpp File
    //cpp file
    void GenerateCppHeader();
    void GenerateCallBackControl(bool p_bIsCtrlClass);
    void GenerateCallBackMenu(bool p_bIsCtrlClass);

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
