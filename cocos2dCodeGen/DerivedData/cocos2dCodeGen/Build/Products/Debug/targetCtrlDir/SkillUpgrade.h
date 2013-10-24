//
//  SkillUpgrade.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__SkillUpgrade__
#define __autogen_ccbuilder__SkillUpgrade__

#include "Global/Constants.h"
#include "SkillUpgrade_CCB.h"

class SkillUpgrade
:public cocos2d::CCLayer
{
public:
    SkillUpgrade();
    virtual ~SkillUpgrade();

    CREATE_FUNC(SkillUpgrade);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:

 // menu call back fuction 
public:
	void selector_back(cocos2d::CCObject * pSender);
	void selector_transfer(cocos2d::CCObject * pSender);
	void selector_select_item(cocos2d::CCObject * pSender);
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    SkillUpgrade_CCB* m_ccbMember;
};
#endif

