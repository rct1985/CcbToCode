//
//  MazeLayer.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__MazeLayer__
#define __autogen_ccbuilder__MazeLayer__

#include "Global/Constants.h"
#include "MazeLayer_CCB.h"

class MazeLayer
:public cocos2d::CCLayer
{
public:
    MazeLayer();
    virtual ~MazeLayer();

    CREATE_FUNC(MazeLayer);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:

 // menu call back fuction 
public:
	void clickButton_exit(cocos2d::CCObject * pSender);
	void clickButton_reset(cocos2d::CCObject * pSender);
	void clickButton_explore(cocos2d::CCObject * pSender);
	void clickButton_help(cocos2d::CCObject * pSender);
	void clickButtonForInstruction_exit(cocos2d::CCObject * pSender);
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    MazeLayer_CCB* m_ccbMember;
};
#endif

