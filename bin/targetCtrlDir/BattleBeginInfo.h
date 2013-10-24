//
//  BattleBeginInfo.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__BattleBeginInfo__
#define __autogen_ccbuilder__BattleBeginInfo__

#include "Global/Constants.h"
#include "BattleBeginInfo_CCB.h"

class BattleBeginInfo
:public cocos2d::CCLayer
{
public:
    BattleBeginInfo();
    virtual ~BattleBeginInfo();

    CREATE_FUNC(BattleBeginInfo);
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
    BattleBeginInfo_CCB* m_ccbMember;
};
#endif

