//
//  SkillUpgradeItem.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__SkillUpgradeItem__
#define __autogen_ccbuilder__SkillUpgradeItem__

#include "Global/Constants.h"
#include "SkillUpgradeItem_CCB.h"

class SkillUpgradeItem
:public cocos2d::CCLayer
{
public:
    SkillUpgradeItem();
    virtual ~SkillUpgradeItem();

    CREATE_FUNC(SkillUpgradeItem);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:

 // menu call back fuction 
public:
	void selector_select(cocos2d::CCObject * pSender);
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    SkillUpgradeItem_CCB* m_ccbMember;
};
#endif

