//
//  Formation.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//
//  for cocos2dx_3_x

#ifndef __autogen_ccbuilder__Formation__
#define __autogen_ccbuilder__Formation__

//#include "Global/Constants.h"
#include "Formation_CCB.h"

class Formation
:public cocos2d::Layer
{
public:
    Formation();
    virtual ~Formation();

    CREATE_FUNC(Formation);
    static Formation* create(std::string p_strCCBIFile);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:
	void selector_back(Ref* pSender);
	void selector_quickGroup(Ref* pSender);
	void selector_showGroupList(Ref* pSender);
	void selector_showGroupDetail(Ref* pSender);

 // menu call back fuction 
public:
	void selector_showCard(cocos2d::Ref* pSender);
//
private:
    cocosbuilder::CCBReader* m_ccbReader;
    Formation_CCB* m_ccbMember;
    std::string m_strCCBIFile;
};
#endif

