//
//  SkillDetail.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__SkillDetail__
#define __autogen_ccbuilder__SkillDetail__

#include "Global/Constants.h"
#include "SkillDetail_CCB.h"

class SkillDetail
:public cocos2d::CCLayer
{
public:
    SkillDetail();
    virtual ~SkillDetail();

    CREATE_FUNC(SkillDetail);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:

 // menu call back fuction 
public:
	void sel_close(cocos2d::CCObject * pSender);
	void sel_change(cocos2d::CCObject * pSender);
	void sel_upgrade(cocos2d::CCObject * pSender);
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    SkillDetail_CCB* m_ccbMember;
};
#endif

