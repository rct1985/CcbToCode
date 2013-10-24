//
//  CampHonorExchangeLayer.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__CampHonorExchangeLayer__
#define __autogen_ccbuilder__CampHonorExchangeLayer__

#include "Global/Constants.h"
#include "CampHonorExchangeLayer_CCB.h"

class CampHonorExchangeLayer
:public cocos2d::CCLayer
{
public:
    CampHonorExchangeLayer();
    virtual ~CampHonorExchangeLayer();

    CREATE_FUNC(CampHonorExchangeLayer);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:

 // menu call back fuction 
public:
	void clickButton_exit(cocos2d::CCObject * pSender);
	void clickButton_randomExchange(cocos2d::CCObject * pSender);
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    CampHonorExchangeLayer_CCB* m_ccbMember;
};
#endif

