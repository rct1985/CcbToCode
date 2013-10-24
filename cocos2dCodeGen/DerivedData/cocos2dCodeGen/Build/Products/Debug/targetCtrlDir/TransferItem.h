//
//  TransferItem.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__TransferItem__
#define __autogen_ccbuilder__TransferItem__

#include "Global/Constants.h"
#include "TransferItem_CCB.h"

class TransferItem
:public cocos2d::CCLayer
{
public:
    TransferItem();
    virtual ~TransferItem();

    CREATE_FUNC(TransferItem);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:

 // menu call back fuction 
public:
	void selector_selected(cocos2d::CCObject * pSender);
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    TransferItem_CCB* m_ccbMember;
};
#endif

