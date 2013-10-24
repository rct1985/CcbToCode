//
//  Formation.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__Formation__
#define __autogen_ccbuilder__Formation__

#include "Global/Constants.h"
#include "Formation_CCB.h"

class Formation
:public cocos2d::CCLayer
{
public:
    Formation();
    virtual ~Formation();

    CREATE_FUNC(Formation);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:
	void selector_back(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);
	void selector_quickGroup(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);
	void selector_showGroupList(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);
	void selector_showGroupDetail(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);
	void (CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);

 // menu call back fuction 
public:
	void selector_showCard(cocos2d::CCObject * pSender);
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    Formation_CCB* m_ccbMember;
};
#endif

