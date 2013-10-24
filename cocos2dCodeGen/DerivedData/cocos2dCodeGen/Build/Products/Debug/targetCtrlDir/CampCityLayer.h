//
//  CampCityLayer.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__CampCityLayer__
#define __autogen_ccbuilder__CampCityLayer__

#include "Global/Constants.h"
#include "CampCityLayer_CCB.h"

class CampCityLayer
:public cocos2d::CCLayer
{
public:
    CampCityLayer();
    virtual ~CampCityLayer();

    CREATE_FUNC(CampCityLayer);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:

 // menu call back fuction 
public:
	void clickButton_exit(cocos2d::CCObject * pSender);
	void clickButton_attack(cocos2d::CCObject * pSender);
	void clickButton_defence(cocos2d::CCObject * pSender);
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    CampCityLayer_CCB* m_ccbMember;
};
#endif

