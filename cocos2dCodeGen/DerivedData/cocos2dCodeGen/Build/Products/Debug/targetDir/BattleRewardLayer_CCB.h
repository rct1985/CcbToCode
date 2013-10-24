//
//  BattleRewardLayer_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__BattleRewardLayer_CCB__
#define __autogen_ccbuilder__BattleRewardLayer_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class BattleRewardLayer;

class BattleRewardLayer_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    BattleRewardLayer_CCB()
    :CCLayer()

	,m_menu(0)
	,m_menuItem_confirm(0)
	,m_labelExp(0)
	,m_labelGameCoin(0)
	,m_spriteItem_0(0)
	,m_spriteItem_1(0)
	,m_spriteItem_2(0)
	,m_spriteItem_3(0)
	,m_spriteItem_4(0)
{}
CREATE_FUNC(BattleRewardLayer_CCB);


//Class Loader , modify it when necessary
class BattleRewardLayer_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(BattleRewardLayer_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(BattleRewardLayer_CCB);
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
	void clickButton_confirm(cocos2d::CCObject * pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::CCMenu*		m_menu;
	cocos2d::CCMenuItemImage*		m_menuItem_confirm;
	cocos2d::CCLabelTTF*		m_labelExp;
	cocos2d::CCLabelTTF*		m_labelGameCoin;
	cocos2d::CCSprite*		m_spriteItem_0;
	cocos2d::CCSprite*		m_spriteItem_1;
	cocos2d::CCSprite*		m_spriteItem_2;
	cocos2d::CCSprite*		m_spriteItem_3;
	cocos2d::CCSprite*		m_spriteItem_4;

 //member visit function
public:
	inline cocos2d::CCMenu*&		menu(){ return m_menu; }
	inline cocos2d::CCMenuItemImage*&		menuItem_confirm(){ return m_menuItem_confirm; }
	inline cocos2d::CCLabelTTF*&		labelExp(){ return m_labelExp; }
	inline cocos2d::CCLabelTTF*&		labelGameCoin(){ return m_labelGameCoin; }
	inline cocos2d::CCSprite*&		spriteItem_0(){ return m_spriteItem_0; }
	inline cocos2d::CCSprite*&		spriteItem_1(){ return m_spriteItem_1; }
	inline cocos2d::CCSprite*&		spriteItem_2(){ return m_spriteItem_2; }
	inline cocos2d::CCSprite*&		spriteItem_3(){ return m_spriteItem_3; }
	inline cocos2d::CCSprite*&		spriteItem_4(){ return m_spriteItem_4; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(BattleRewardLayer*, m_battleRewardLayer, BattleRewardLayer);
};
#endif
