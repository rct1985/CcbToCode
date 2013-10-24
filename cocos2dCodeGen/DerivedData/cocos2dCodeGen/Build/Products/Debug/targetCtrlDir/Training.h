//
//  Training.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__Training__
#define __autogen_ccbuilder__Training__

#include "Global/Constants.h"
#include "Training_CCB.h"

class Training
:public cocos2d::CCLayer
{
public:
    Training();
    virtual ~Training();

    CREATE_FUNC(Training);
    bool init();

    void initCCB();
    void giveValueToCCB();



 //control call back function;
public:
	void selector_reset(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);
	void selector_back(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);

 // menu call back fuction 
public:
	void selector_singleFree(cocos2d::CCObject * pSender);
	void selector_single(cocos2d::CCObject * pSender);
	void selector_multiFree(cocos2d::CCObject * pSender);
	void selector_multi(cocos2d::CCObject * pSender);
	void selector_resultAccept(cocos2d::CCObject * pSender);
	void selector_resultRefuse(cocos2d::CCObject * pSender);
	void selector_confirmYES(cocos2d::CCObject * pSender);
	void selector_confirmNO(cocos2d::CCObject * pSender);
//
private:
    cocos2d::extension::CCBReader* m_ccbReader;
    Training_CCB* m_ccbMember;
};
#endif

