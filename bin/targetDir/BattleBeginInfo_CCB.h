//
//  BattleBeginInfo_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__BattleBeginInfo_CCB__
#define __autogen_ccbuilder__BattleBeginInfo_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class BattleBeginInfo;

class BattleBeginInfo_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    BattleBeginInfo_CCB()
    :CCLayer()

	,m_spriteMainActor_left(0)
	,m_spriteMainActor_right(0)
	,m_layerForCard_right(0)
	,m_spriteCard_right_05(0)
	,m_spriteCard_right_04(0)
	,m_spriteCard_right_03(0)
	,m_spriteCard_right_02(0)
	,m_spriteCard_right_01(0)
	,m_spriteCard_right_00(0)
	,m_spriteLight_right(0)
	,m_layerForCard_left(0)
	,m_spriteCard_left_05(0)
	,m_spriteCard_left_04(0)
	,m_spriteCard_left_03(0)
	,m_spriteCard_left_02(0)
	,m_spriteCard_left_01(0)
	,m_spriteCard_left_00(0)
	,m_spriteLight_left(0)
{}
CREATE_FUNC(BattleBeginInfo_CCB);


//Class Loader , modify it when necessary
class BattleBeginInfo_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(BattleBeginInfo_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(BattleBeginInfo_CCB);
};

//virtual function from base !
protected:
    virtual cocos2d::SEL_MenuHandler onResolveCCBCCMenuItemSelector(cocos2d::CCObject * pTarget, const char * pSelectorName);
    virtual cocos2d::extension::SEL_CCControlHandler onResolveCCBCCControlSelector(cocos2d::CCObject * pTarget, const char * pSelectorName);
    virtual bool onAssignCCBMemberVariable(cocos2d::CCObject * pTarget, const char * pMemberVariableName, cocos2d::CCNode * pNode);
    virtual void onNodeLoaded(cocos2d::CCNode * pNode, cocos2d::extension::CCNodeLoader * pNodeLoader);
    virtual bool onAssignCCBCustomProperty(CCObject* pTarget, const char* pMemberVariableName, cocos2d::extension:: CCBValue* pCCBValue);

 //control call back function;
protected:

 // menu call back fuction 
protected:

 //member will assigned form ccbi file
protected:
	cocos2d::CCSprite*		m_spriteMainActor_left;
	cocos2d::CCSprite*		m_spriteMainActor_right;
	cocos2d::CCLayer*		m_layerForCard_right;
	cocos2d::CCSprite*		m_spriteCard_right_05;
	cocos2d::CCSprite*		m_spriteCard_right_04;
	cocos2d::CCSprite*		m_spriteCard_right_03;
	cocos2d::CCSprite*		m_spriteCard_right_02;
	cocos2d::CCSprite*		m_spriteCard_right_01;
	cocos2d::CCSprite*		m_spriteCard_right_00;
	cocos2d::CCSprite*		m_spriteLight_right;
	cocos2d::CCLayer*		m_layerForCard_left;
	cocos2d::CCSprite*		m_spriteCard_left_05;
	cocos2d::CCSprite*		m_spriteCard_left_04;
	cocos2d::CCSprite*		m_spriteCard_left_03;
	cocos2d::CCSprite*		m_spriteCard_left_02;
	cocos2d::CCSprite*		m_spriteCard_left_01;
	cocos2d::CCSprite*		m_spriteCard_left_00;
	cocos2d::CCSprite*		m_spriteLight_left;

 //member visit function
public:
	inline cocos2d::CCSprite*&		spriteMainActor_left(){ return m_spriteMainActor_left; }
	inline cocos2d::CCSprite*&		spriteMainActor_right(){ return m_spriteMainActor_right; }
	inline cocos2d::CCLayer*&		layerForCard_right(){ return m_layerForCard_right; }
	inline cocos2d::CCSprite*&		spriteCard_right_05(){ return m_spriteCard_right_05; }
	inline cocos2d::CCSprite*&		spriteCard_right_04(){ return m_spriteCard_right_04; }
	inline cocos2d::CCSprite*&		spriteCard_right_03(){ return m_spriteCard_right_03; }
	inline cocos2d::CCSprite*&		spriteCard_right_02(){ return m_spriteCard_right_02; }
	inline cocos2d::CCSprite*&		spriteCard_right_01(){ return m_spriteCard_right_01; }
	inline cocos2d::CCSprite*&		spriteCard_right_00(){ return m_spriteCard_right_00; }
	inline cocos2d::CCSprite*&		spriteLight_right(){ return m_spriteLight_right; }
	inline cocos2d::CCLayer*&		layerForCard_left(){ return m_layerForCard_left; }
	inline cocos2d::CCSprite*&		spriteCard_left_05(){ return m_spriteCard_left_05; }
	inline cocos2d::CCSprite*&		spriteCard_left_04(){ return m_spriteCard_left_04; }
	inline cocos2d::CCSprite*&		spriteCard_left_03(){ return m_spriteCard_left_03; }
	inline cocos2d::CCSprite*&		spriteCard_left_02(){ return m_spriteCard_left_02; }
	inline cocos2d::CCSprite*&		spriteCard_left_01(){ return m_spriteCard_left_01; }
	inline cocos2d::CCSprite*&		spriteCard_left_00(){ return m_spriteCard_left_00; }
	inline cocos2d::CCSprite*&		spriteLight_left(){ return m_spriteLight_left; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(BattleBeginInfo*, m_battleBeginInfo, BattleBeginInfo);
};
#endif
