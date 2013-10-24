//
//  ExpTransResult.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__ExpTransResult__
#define __autogen_ccbuilder__ExpTransResult__

#include "Global/Constants.h"
#include "ExpTransResult_CCB.h"

class ExpTransResult
:public cocos2d::CCLayer
{
public:
    ExpTransResult();
    virtual ~ExpTransResult();

    CREATE_FUNC(ExpTransResult);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:

 // menu call back fuction 
public:
	void selector_confirm(cocos2d::CCObject * pSender);
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    ExpTransResult_CCB* m_ccbMember;
};
#endif

