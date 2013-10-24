//
//  EquipmentList.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__EquipmentList__
#define __autogen_ccbuilder__EquipmentList__

#include "Global/Constants.h"
#include "EquipmentList_CCB.h"

class EquipmentList
:public cocos2d::CCLayer
{
public:
    EquipmentList();
    virtual ~EquipmentList();

    CREATE_FUNC(EquipmentList);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:

 // menu call back fuction 
public:
	void selector_noneFilter(cocos2d::CCObject * pSender);
	void selector_weaponFilter(cocos2d::CCObject * pSender);
	void selector_armorFilter(cocos2d::CCObject * pSender);
	void selector_magicWeaponFilter(cocos2d::CCObject * pSender);
	void selector_necklaceFilter(cocos2d::CCObject * pSender);
	void selector_ringFilter(cocos2d::CCObject * pSender);
	void selector_back(cocos2d::CCObject * pSender);
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    EquipmentList_CCB* m_ccbMember;
};
#endif

