//
//  CardList.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__CardList__
#define __autogen_ccbuilder__CardList__

#include "Global/Constants.h"
#include "CardList_CCB.h"

class CardList
:public cocos2d::CCLayer
{
public:
    CardList();
    virtual ~CardList();

    CREATE_FUNC(CardList);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:

 // menu call back fuction 
public:
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    CardList_CCB* m_ccbMember;
};
#endif

