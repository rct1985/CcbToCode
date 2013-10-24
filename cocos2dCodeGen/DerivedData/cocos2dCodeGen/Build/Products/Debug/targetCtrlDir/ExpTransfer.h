//
//  ExpTransfer.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__ExpTransfer__
#define __autogen_ccbuilder__ExpTransfer__

#include "Global/Constants.h"
#include "ExpTransfer_CCB.h"

class ExpTransfer
:public cocos2d::CCLayer
{
public:
    ExpTransfer();
    virtual ~ExpTransfer();

    CREATE_FUNC(ExpTransfer);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:

 // menu call back fuction 
public:
	void selector_back(cocos2d::CCObject * pSender);
	void selector_transfer(cocos2d::CCObject * pSender);
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    ExpTransfer_CCB* m_ccbMember;
};
#endif

