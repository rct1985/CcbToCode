//
//  BattleRewardLayer.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__BattleRewardLayer__
#define __autogen_ccbuilder__BattleRewardLayer__

#include "Global/Constants.h"
#include "BattleRewardLayer_CCB.h"

class BattleRewardLayer
:public cocos2d::CCLayer
{
public:
    BattleRewardLayer();
    virtual ~BattleRewardLayer();

    CREATE_FUNC(BattleRewardLayer);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:

 // menu call back fuction 
public:
	void clickButton_confirm(cocos2d::CCObject * pSender);
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    BattleRewardLayer_CCB* m_ccbMember;
};
#endif

