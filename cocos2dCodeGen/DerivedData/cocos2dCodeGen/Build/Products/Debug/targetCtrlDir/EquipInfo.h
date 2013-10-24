//
//  EquipInfo.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__EquipInfo__
#define __autogen_ccbuilder__EquipInfo__

#include "Global/Constants.h"
#include "EquipInfo_CCB.h"

class EquipInfo
:public cocos2d::CCLayer
{
public:
    EquipInfo();
    virtual ~EquipInfo();

    CREATE_FUNC(EquipInfo);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:

 // menu call back fuction 
public:
	void selector_back(cocos2d::CCObject * pSender);
	void selector_sell(cocos2d::CCObject * pSender);
	void selector_upgrade(cocos2d::CCObject * pSender);
	void selector_equip(cocos2d::CCObject * pSender);
	void selector_sellConfirm(cocos2d::CCObject * pSender);
	void selector_sellCancel(cocos2d::CCObject * pSender);
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    EquipInfo_CCB* m_ccbMember;
};
#endif

