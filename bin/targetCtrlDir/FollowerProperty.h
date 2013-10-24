//
//  FollowerProperty.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__FollowerProperty__
#define __autogen_ccbuilder__FollowerProperty__

#include "Global/Constants.h"
#include "FollowerProperty_CCB.h"

class FollowerProperty
:public cocos2d::CCLayer
{
public:
    FollowerProperty();
    virtual ~FollowerProperty();

    CREATE_FUNC(FollowerProperty);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:

 // menu call back fuction 
public:
	void selector_back(cocos2d::CCObject * pSender);
	void selector_weapon(cocos2d::CCObject * pSender);
	void selector_armor(cocos2d::CCObject * pSender);
	void selector_trump(cocos2d::CCObject * pSender);
	void selector_necklace(cocos2d::CCObject * pSender);
	void selector_ring(cocos2d::CCObject * pSender);
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    FollowerProperty_CCB* m_ccbMember;
};
#endif

