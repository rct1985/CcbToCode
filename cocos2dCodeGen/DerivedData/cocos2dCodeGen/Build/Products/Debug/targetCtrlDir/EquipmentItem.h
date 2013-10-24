//
//  EquipmentItem.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__EquipmentItem__
#define __autogen_ccbuilder__EquipmentItem__

#include "Global/Constants.h"
#include "EquipmentItem_CCB.h"

class EquipmentItem
:public cocos2d::CCLayer
{
public:
    EquipmentItem();
    virtual ~EquipmentItem();

    CREATE_FUNC(EquipmentItem);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:
	void selector_upgrade(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);
	void selector_equip(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);

 // menu call back fuction 
public:
	void selector_iconButton(cocos2d::CCObject * pSender);
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    EquipmentItem_CCB* m_ccbMember;
};
#endif

