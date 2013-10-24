//
//  EquipUpgrade.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__EquipUpgrade__
#define __autogen_ccbuilder__EquipUpgrade__

#include "Global/Constants.h"
#include "EquipUpgrade_CCB.h"

class EquipUpgrade
:public cocos2d::CCLayer
{
public:
    EquipUpgrade();
    virtual ~EquipUpgrade();

    CREATE_FUNC(EquipUpgrade);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:

 // menu call back fuction 
public:
	void selector_back(cocos2d::CCObject * pSender);
	void selector_upgrade(cocos2d::CCObject * pSender);
	void selector_resultOK(cocos2d::CCObject * pSender);
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    EquipUpgrade_CCB* m_ccbMember;
};
#endif

