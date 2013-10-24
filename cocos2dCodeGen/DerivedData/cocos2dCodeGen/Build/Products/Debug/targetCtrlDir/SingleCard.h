//
//  SingleCard.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__SingleCard__
#define __autogen_ccbuilder__SingleCard__

#include "Global/Constants.h"
#include "SingleCard_CCB.h"

class SingleCard
:public cocos2d::CCLayer
{
public:
    SingleCard();
    virtual ~SingleCard();

    CREATE_FUNC(SingleCard);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:
	void selector_view(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);
	void selector_switch(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);

 // menu call back fuction 
public:
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    SingleCard_CCB* m_ccbMember;
};
#endif

