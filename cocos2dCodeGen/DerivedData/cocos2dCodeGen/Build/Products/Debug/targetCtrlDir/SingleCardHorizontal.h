//
//  SingleCardHorizontal.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__SingleCardHorizontal__
#define __autogen_ccbuilder__SingleCardHorizontal__

#include "Global/Constants.h"
#include "SingleCardHorizontal_CCB.h"

class SingleCardHorizontal
:public cocos2d::CCLayer
{
public:
    SingleCardHorizontal();
    virtual ~SingleCardHorizontal();

    CREATE_FUNC(SingleCardHorizontal);
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
    SingleCardHorizontal_CCB* m_ccbMember;
};
#endif

