//
//  CodeGen.cpp
//  cocos2dCodeGen
//
//  Created by user on 13-4-25.
//  Copyright (c) 2013年 user. All rights reserved.
//

#include "CodeGen.h"
#include <fstream>
#include <sstream>
#include <set>

using namespace std;

//cpp file
std::string m_cppHeader;
std::string m_callBackControl;
std::string m_callBackMenu;
std::string m_glueAssignMember;
std::string m_glueControlCallBack;
std::string m_glueMenuCallBack;
std::string m_glueCustomMember;
std::string m_loaderInnerClass;  //>=-Rct-=<


//header file
std::string m_classDec;
std::string m_interfaceDec;
std::string m_callBackControlDec;
std::string m_callBackMenuDec;

std::string g_ctrlClassHeadFileContent; //head for .h
std::string g_ctrlClassEndFileContent;  //end for .h
std::string g_ctrlClassCppFileContent;
std::string g_ctrlCallBackControl;
std::string g_ctrlCallBackMenu;


static std::set<std::string> cocos2dClass =
{
    "CCNode",
    "CCSprite",
    "CCLayer",
    "CCLayerColor",
    "CCLayerGradient",
    "CCMenu",
    "CCLabelBMFont",
    "CCLabelTTF",
    "CCParticleSystem",
    "CCParticleSystemQuad",
    "CCParticleSystemPoint",
    "CCMenuItemImage",
    "CCBFile",
    "CCScale9Sprite",
    "CCControl",
    "CCControlButton",
    "CCScrollView",
#ifdef Cocos2dX_3
    "Node",
    "Sprite",
    "Layer",
    "LayerColor",
    "LayerGradient",
    "Menu",
    "LabelBMFont",
    "Label",
    "ParticleSystem",
    "ParticleSystemQuad",
    "ParticleSystemPoint",
    "MenuItemImage",
    "CCBFile",
    "Scale9Sprite",
    "Control",
    "ControlButton",
    "ScrollView",
#endif
};
static std::set<std::string> extensionClass=
{
    "CCBFile",
    "CCScale9Sprite",
    "CCControl",
    "CCControlButton",
    "CCScrollView",
#ifdef Cocos2dX_3
    "BFile",
    "Scale9Sprite",
    "Control",
    "ControlButton",
    "ScrollView",
#endif
};

void string_replace( std::string &strBig, const std::string &strsrc, const std::string &strdst )
{
    std::string::size_type pos = 0;
    std::string::size_type srclen = strsrc.size();
    std::string::size_type dstlen = strdst.size();
    
    while( (pos=strBig.find(strsrc, pos)) != std::string::npos )
    {
        strBig.replace( pos, srclen, strdst );
        pos += dstlen;
    }
} 


std::string ReadTemplateFromDic(const std::string& fileName,NSDictionary * templateCppCode)
{
    
    return std::string(
            [ [templateCppCode objectForKey: [NSString stringWithFormat:@"%s",fileName.c_str()]] UTF8String]
                       );

}

CodeGen::CodeGen(std::ostream& h,std::ostream& c)
:m_header(h)
,m_cpp(c)
,m_ctrlHeader(h)
,m_ctrlCpp(c)
{
    this->init();
}


CodeGen::CodeGen(std::ostream& p_head, std::ostream& p_cpp, std::ostream& p_ctrlHead, std::ostream& p_ctrlCpp)
:m_header(p_head)
,m_cpp(p_cpp)
,m_ctrlHeader(p_ctrlHead)
,m_ctrlCpp(p_ctrlCpp)
{
    this->init();
}

void CodeGen::init(){
    //read
    if (m_cppHeader == "") {
        NSString *codeTemplatePath = [[NSBundle mainBundle] pathForResource:@"codeTemplateCpp" ofType:@"plist"];
        NSDictionary * templateCppCode = [NSDictionary dictionaryWithContentsOfFile:codeTemplatePath];
        
        
        m_classDec = ReadTemplateFromDic("ClassDec.txt",templateCppCode);
        m_interfaceDec = ReadTemplateFromDic("InterfaceDec.txt",templateCppCode);
        m_callBackControlDec = ReadTemplateFromDic("CallBackCControlDec.txt",templateCppCode);
        m_callBackMenuDec = ReadTemplateFromDic("CallBackMenuDec.txt",templateCppCode);
        
        m_glueMenuCallBack = ReadTemplateFromDic("GlueMenuCallBack.txt",templateCppCode);
        m_glueCustomMember = ReadTemplateFromDic("GlueCustomMember.txt",templateCppCode);
        m_cppHeader = ReadTemplateFromDic("CppHeader.txt",templateCppCode);
        m_glueAssignMember = ReadTemplateFromDic("GlueAssignMember.txt",templateCppCode);
        m_glueControlCallBack = ReadTemplateFromDic("GlueControlCallBack.txt",templateCppCode );
        m_callBackControl = ReadTemplateFromDic("CallBackControl.txt",templateCppCode);
        m_callBackMenu = ReadTemplateFromDic("CallBackMenu.txt",templateCppCode);
        
        m_loaderInnerClass = ReadTemplateFromDic("Loader.txt",templateCppCode);
        
        g_ctrlClassHeadFileContent = ReadTemplateFromDic("CtrlClassDecHead.txt",templateCppCode);
        g_ctrlClassEndFileContent = ReadTemplateFromDic("CtrlClassDecEnd.txt",templateCppCode);
        g_ctrlClassCppFileContent = ReadTemplateFromDic("CtrlCppContent.txt",templateCppCode);
        
        g_ctrlCallBackControl = ReadTemplateFromDic("CtrlCallBackControl.txt",templateCppCode);
        g_ctrlCallBackMenu = ReadTemplateFromDic("CtrlCallBackMenu.txt",templateCppCode);
    }
}

#pragma mark cocos2dx_3
#ifdef Cocos2dX_3
void CodeGen::preProcess_cocos2dx_3(){
    //去掉 CCB类型里的"CC"
    for (/*const*/ TypeName& item :m_listAssignMember) {
        //CCLabelTTF -> Label
        if(item.type == "CCLabelTTF"){
            item.type = "Label";
        }
        
        //去掉CC
        if(item.type.find("CC") != string::npos){
            string l_strTypeFor3 = item.type.substr(2);
            item.type = l_strTypeFor3;
        }
    }
    
    //更改m_baseClass
    if(m_baseClass.find("CC") != string::npos){
        m_baseClass = m_baseClass.substr(2);
    }
    
    //去掉cocos2dClass的CC
//    std::set<std::string>::iterator iter;
//    for (iter = cocos2dClass.begin(); iter!=cocos2dClass.end(); iter++) {
//        NSLog(@"%s", (*iter).c_str());
//        string l_strTypeFor3 = (*iter).substr(2);
//        (*iter).assign(l_strTypeFor3);
//        //(*iter) = (*iter).substr(2);
//    }
}
#endif

#pragma mark HeadFile
void CodeGen::GenerateClassDec()
{
    std::string classDec = m_classDec;
    string_replace(classDec, "%class_name%", m_className);
    string_replace(classDec, "%base_class%", m_baseClass);
    string_replace(classDec, "%ctrl_class%", m_pureClassName);
    m_header<< classDec<<"\n";
    
    //initialize member or custom member
    for (const TypeName& item :m_listAssignMember) {
        if (item.type == "string" || item.type == "std::string") {
            continue;
        }
        m_header <<"\t," << item.name << "(0)\n";
    }
    for (const TypeName& item :m_listCutomProperty) {
        if (item.type == "string" || item.type == "std::string") {
            continue;
        }
        m_header <<"\t," << item.name << "(0)\n";
    }
    
    m_header << "{}\n";
    
    //destroy
    m_header << "virtual ~ "<<m_className<<"(){\n";
    for (const TypeName& item :m_listAssignMember) {
        if (item.type == "string" || item.type == "std::string") {
            continue;
        }
        m_header <<"//\tCC_SAFE_RELEASE_NULL(" << item.name << ");\n";
    }
    m_header<<"}\n\n";
    
    //generate loader
    /*
     if (m_baseClass == "CCNode") {
     m_header << "IMPLI_READER_Node("<< m_className << ");\n\n";
     }
     else if(m_baseClass == "CCLayer")
     {
     m_header << "IMPLI_READER_Layer("<< m_className << ");\n\n";
     }*/
    
    //Create func
    m_header <<"CREATE_FUNC("<<m_className<<");\n\n";
    
    
    
    //generate inner loader >=-Rct-=<
    m_header << "\n//Class Loader , modify it when necessary\n";
    string l_strLoader = m_loaderInnerClass;
    string_replace(l_strLoader, "%class_name%", m_className);
    string_replace(l_strLoader, "%loader_name%", m_className+"Loader");
    if (m_baseClass == "CCNode" || m_baseClass == "Node") {
        string_replace(l_strLoader, "%super_loader_name%", "CCNodeLoader");
    }
    else if(m_baseClass == "CCLayer" || m_baseClass == "Layer"){
#ifdef Cocos2dX_3
        string_replace(l_strLoader, "%super_loader_name%", "LayerLoader");
#else
        string_replace(l_strLoader, "%super_loader_name%", "CCLayerLoader");
#endif
    }
    m_header << l_strLoader<<"\n";
}
void CodeGen::GenerateInterfaceDec()
{
    m_header << "\n//virtual function from base !\n";
    m_header << m_interfaceDec;
}
void CodeGen::GenerateCallBackControlDec(bool p_bIsCtrlClass)
{
    if(p_bIsCtrlClass){
        m_ctrlHeader << "\n //control call back function;\n";
        m_ctrlHeader << "public:" << std::endl;
    }else{
        m_header << "\n //control call back function;\n";
        m_header << "protected:" << std::endl;
    }
    
    for (auto iter = m_listCContorlCallBack.cbegin(); iter != m_listCContorlCallBack.cend(); ++iter) {
        
        std::string call_control = m_callBackControlDec;        
        string_replace(call_control, "%control_call%", *iter);
        if(p_bIsCtrlClass){
            m_ctrlHeader << call_control;
        }else{
            m_header << call_control;
        }
    }
}
void CodeGen::GenerateCallBackMenuDec(bool p_bIsCtrlClass)
{
    if(p_bIsCtrlClass){
        m_ctrlHeader << "\n // menu call back fuction \n";
        m_ctrlHeader << "public:" << std::endl;
    }else{
        m_header << "\n // menu call back fuction \n";
        m_header << "protected:" << std::endl;
    }
    
    for (auto iter = m_listMenuCallBack.cbegin(); iter != m_listMenuCallBack.cend(); ++iter) {
        std::string call_menu = m_callBackMenuDec;
        string_replace(call_menu, "%menu_call%", *iter);
        if(p_bIsCtrlClass){
            m_ctrlHeader << call_menu;
        }else{
            m_header << call_menu;
        }
    }
}


void CodeGen::GenerateAssignMemberDec()
{
    m_header << "\n //member will assigned form ccbi file\n";
    m_header << "protected:" << std::endl;
    for (const TypeName& item :m_listAssignMember) {
        m_header << "\t";
        if (cocos2dClass.find(item.type) != cocos2dClass.end()) {
            m_header<<"cocos2d::";
        }
        if (extensionClass.find(item.type) != extensionClass.end()) {
            m_header <<"extension::";
        }
        m_header<< item.type << "*\t\t" << item.name << ";\n";
    }
}

void CodeGen::GenerateVisitMemberDefine(){
    m_header << "\n //member visit function\n";
    m_header<< "public:" << std::endl;
    for (const TypeName& item :m_listAssignMember) {
        m_header << "\t";
        m_header<< "inline ";
        if (cocos2dClass.find(item.type) != cocos2dClass.end()) {
            m_header<<"cocos2d::";
        }
        if (extensionClass.find(item.type) != extensionClass.end()) {
            m_header <<"extension::";
        }
        m_header<< item.type << "*&\t\t";
        
        string l_strFuncName;
        if(item.name.find("m_") == 0){
            l_strFuncName = item.name.substr(2);
        }else{
            l_strFuncName = item.name;
        }
        m_header << l_strFuncName << "(){ return " << item.name << "; }\n";
    }
    
    m_header<<"\n //CustomMember visit function\n";
    for (const TypeName& item : m_listCutomProperty) {
        m_header << "\t";
        m_header<< "inline ";

        m_header<< item.type << "\t\t";
        
        string l_strFuncName;
        if(item.name.find("m_") == 0){
            l_strFuncName = item.name.substr(2);
        }else{
            l_strFuncName = item.name;
        }
        m_header << l_strFuncName << "(){ return " << item.name << "; }\n";
    }
}

void CodeGen::GenerateCustomMemberDec()
{
    m_header << "\n //custom member list \n";
    m_header << "protected:" << std::endl;
    for (const TypeName& item :m_listCutomProperty) {
        m_header << "\t"<< item.type << "\t\t" << item.name << ";\n";
    }
}

void CodeGen::GenerateCtrlClassDec(){
    m_ctrlClassPointMember = m_pureClassName;
    transform(m_ctrlClassPointMember.begin(), m_ctrlClassPointMember.begin() + 1, m_ctrlClassPointMember.begin(), ::tolower);
    m_ctrlClassPointMember = "m_" + m_ctrlClassPointMember;
    m_header << "\n //ctrl class \n";
    m_header << "protected:" <<std::endl;
    m_header << "\tCC_SYNTHESIZE("<< m_pureClassName<<"*, "<< m_ctrlClassPointMember <<", "<<m_pureClassName<< ");\n";
}

void CodeGen::GeneateClassEnd()
{
    m_header << "};\n#endif\n";
    
}

void CodeGen::GenerateCtrlClassHeadFile(){
    std::string classDec = g_ctrlClassHeadFileContent;
    string_replace(classDec, "%class_name%", m_className);
    string_replace(classDec, "%ctrl_class_name%", m_pureClassName);
    m_ctrlHeader<< classDec<<"\n";
}
void CodeGen::GenerateCtrlClassEndFile(){
    std::string classDec = g_ctrlClassEndFileContent;
    string_replace(classDec, "%class_name%", m_className);
    string_replace(classDec, "%ctrl_class_name%", m_pureClassName);
    m_ctrlHeader<< classDec<<"\n";
}

#pragma mark cpp File
void CodeGen::GenerateCppHeader()
{
    std::string cppHeader = m_cppHeader;
    string_replace(cppHeader, "%class_name%", m_className);
    string_replace(cppHeader, "%ctrl_class_name%", m_pureClassName);
    m_cpp << cppHeader;
}

void CodeGen::GenerateCallBackControl(bool p_bIsCtrlClass)
{
    if(p_bIsCtrlClass){
        m_ctrlCpp << "//control button call back  here ;\n";
        for(const std::string& fName : m_listCContorlCallBack)
        {
            std::string callBackImpli = g_ctrlCallBackControl;
            string_replace(callBackImpli, "%ctrl_class_name%", m_pureClassName);
            string_replace(callBackImpli, "%control_call%", fName);
            m_ctrlCpp << callBackImpli ;
        }
        m_ctrlCpp << "// end control call back\n\n";
    }else{
        m_cpp << "//control button call back  here ;\n";
        for(const std::string& fName : m_listCContorlCallBack)
        {
            std::string callBackImpli = m_callBackControl;
            string_replace(callBackImpli, "%class_name%", m_className);
            string_replace(callBackImpli, "%control_call%", fName);
            string_replace(callBackImpli, "%ctrl_class_member%", m_ctrlClassPointMember);
            m_cpp << callBackImpli ;
        }
        m_cpp << "// end control call back\n\n";
    }
   
}
void CodeGen::GenerateCallBackMenu(bool p_bIsCtrlClass)
{
    if(p_bIsCtrlClass){
        m_ctrlCpp << "// menu call back   here ;\n";
        for(const std::string& fName : m_listMenuCallBack)
        {
            std::string callBackImpli = g_ctrlCallBackMenu;
            string_replace(callBackImpli, "%ctrl_class_name%", m_pureClassName);
            string_replace(callBackImpli, "%menu_call%", fName);
            m_ctrlCpp << callBackImpli;
        }
        m_ctrlCpp << "// end menu call back\n\n";
    }else{
        m_cpp << "// menu call back   here ;\n";
        for(const std::string& fName : m_listMenuCallBack)
        {
            std::string callBackImpli = m_callBackMenu;
            string_replace(callBackImpli, "%class_name%", m_className);
            string_replace(callBackImpli, "%menu_call%", fName);
            string_replace(callBackImpli, "%ctrl_class_member%", m_ctrlClassPointMember);
            m_cpp << callBackImpli;
        }
        m_cpp << "// end menu call back\n\n";
    }
}


void CodeGen::GlueMenuCallBack()
{
    m_cpp << "// glue menu callback here ;\n";
    std::string glueBegin = m_glueMenuCallBack;
    string_replace(glueBegin, "%class_name%", m_className);
    m_cpp << glueBegin ;
    for (const std::string& item : m_listMenuCallBack)
    {
        m_cpp << "\tCCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this," << "\"" << item << "\"," << m_className << "::" << item << ");\n";
    }
    m_cpp << "\treturn NULL;\n";
    m_cpp << "}\n\n";
}

void CodeGen::GlueControlCallBack()
{
    m_cpp << "// glue control button call back  here ;\n";
    std::string glueBegin = m_glueControlCallBack;
    string_replace(glueBegin, "%class_name%", m_className);
    m_cpp << glueBegin ;
    for (const std::string& item : m_listCContorlCallBack)
    {
        m_cpp << "\tCCB_SELECTORRESOLVER_CCCONTROL_GLUE(this," << "\"" << item << "\"," << m_className << "::" << item << ");\n";
    }
    m_cpp << "\treturn NULL;\n";
    m_cpp << "}\n\n";
}
void CodeGen::GlueAssignMember()
{
    m_cpp << "// glue assigned member here ;\n";
    std::string glueBegin = m_glueAssignMember;
    string_replace(glueBegin, "%class_name%", m_className);
    m_cpp << glueBegin ;
    for (const TypeName& item : m_listAssignMember)
    {
        m_cpp << "\tCCB_MEMBERVARIABLEASSIGNER_GLUE(this," << "\"" << item.name << "\"," << item.type << "*," << "this->" << item.name << ");\n";
    }
    m_cpp << "\treturn false;\n";
    m_cpp << "}\n";
}

void CodeGen::GlueCustomMember()
{
    m_cpp << "// glue custom member here ;\n";
    std::string glueBegin = m_glueCustomMember;
    string_replace(glueBegin, "%class_name%", m_className);
    m_cpp << glueBegin ;
    for (const TypeName& item : m_listCutomProperty)
    {
        m_cpp << "\t\tif (0 == strcmp(pMemberVariableName, \"" << item.name << "\")){\n";
        m_cpp << "\t\t\t"<<item.name<< " = ";
        if (item.type == "string" || item.type == "std::string")
        {
#ifdef Cocos2dX_3
            m_cpp << "pCCBValue.asString();\n";
#else
            m_cpp << "pCCBValue->getStringValue();\n";
#endif
        }
        else if(item.type == "int")
        {
#ifdef Cocos2dX_3
            m_cpp << "pCCBValue.asInt();\n";
#else
            m_cpp << "pCCBValue->getIntValue();\n";
#endif
        }
        else if(item.type == "float")
        {
#ifdef Cocos2dX_3
            m_cpp << "pCCBValue.asFloat();\n";
#else
            m_cpp << "pCCBValue->getFloatValue();\n";
#endif
        }
        else if(item.type == "bool")
        {
#ifdef Cocos2dX_3
            m_cpp << "pCCBValue.asBool();\n";
#else
            m_cpp << "pCCBValue->getBoolValue();\n";
#endif
        }
        else
        {
            m_cpp << "0;\n";
        }
        m_cpp << "\t\t\treturn true;\n";
        m_cpp << "\t\t}\n";
    }
    m_cpp << "\t}\n";
    m_cpp << "\treturn false;\n";
    m_cpp << "}\n\n";
}

void CodeGen::GenerateCtrlClassCppFile(){
    std::string classContent = g_ctrlClassCppFileContent;
    string_replace(classContent, "%class_name%", m_className);
    string_replace(classContent, "%ctrl_class_name%", m_pureClassName);
    m_ctrlCpp << classContent<<"\n";
}


