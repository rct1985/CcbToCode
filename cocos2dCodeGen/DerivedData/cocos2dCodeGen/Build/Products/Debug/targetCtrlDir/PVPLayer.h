//
//  PVPLayer.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__PVPLayer__
#define __autogen_ccbuilder__PVPLayer__

#include "Global/Constants.h"
#include "PVPLayer_CCB.h"

class PVPLayer
:public cocos2d::CCLayer
{
public:
    PVPLayer();
    virtual ~PVPLayer();

    CREATE_FUNC(PVPLayer);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:

 // menu call back fuction 
public:
	void clickButton_exit(cocos2d::CCObject * pSender);
	void clickButton_refresh(cocos2d::CCObject * pSender);
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    PVPLayer_CCB* m_ccbMember;
};
#endif

