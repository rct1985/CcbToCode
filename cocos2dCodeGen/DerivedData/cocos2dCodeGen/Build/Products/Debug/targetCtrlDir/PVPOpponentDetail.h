//
//  PVPOpponentDetail.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__PVPOpponentDetail__
#define __autogen_ccbuilder__PVPOpponentDetail__

#include "Global/Constants.h"
#include "PVPOpponentDetail_CCB.h"

class PVPOpponentDetail
:public cocos2d::CCLayer
{
public:
    PVPOpponentDetail();
    virtual ~PVPOpponentDetail();

    CREATE_FUNC(PVPOpponentDetail);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:

 // menu call back fuction 
public:
	void clickButton_exit(cocos2d::CCObject * pSender);
	void clickButton_challage(cocos2d::CCObject * pSender);
	void clickButton_showDetail(cocos2d::CCObject * pSender);
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    PVPOpponentDetail_CCB* m_ccbMember;
};
#endif
