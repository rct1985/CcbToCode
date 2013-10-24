//
//  CampHonorCardResultLayer_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__CampHonorCardResultLayer_CCB__
#define __autogen_ccbuilder__CampHonorCardResultLayer_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class CampHonorCardResultLayer;

class CampHonorCardResultLayer_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    CampHonorCardResultLayer_CCB()
    :CCLayer()

	,m_spriteCard(0)
	,m_menu(0)
	,m_menuItem_sell(0)
	,m_menuItem_accept(0)
	,m_menuItem_exit(0)
	,m_labelHonorWhenSell(0)
	,m_labelTitle(0)
	,m_labelName(0)
{}
CREATE_FUNC(CampHonorCardResultLayer_CCB);


//Class Loader , modify it when necessary
class CampHonorCardResultLayer_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(CampHonorCardResultLayer_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(CampHonorCardResultLayer_CCB);
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
	void clickButton_sell(cocos2d::CCObject * pSender);
	void clickButton_accept(cocos2d::CCObject * pSender);
	void clickButton_exit(cocos2d::CCObject * pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::CCSprite*		m_spriteCard;
	cocos2d::CCMenu*		m_menu;
	cocos2d::CCMenuItemImage*		m_menuItem_sell;
	cocos2d::CCMenuItemImage*		m_menuItem_accept;
	cocos2d::CCMenuItemImage*		m_menuItem_exit;
	cocos2d::CCLabelTTF*		m_labelHonorWhenSell;
	cocos2d::CCLabelTTF*		m_labelTitle;
	cocos2d::CCLabelTTF*		m_labelName;

 //member visit function
public:
	inline cocos2d::CCSprite*&		spriteCard(){ return m_spriteCard; }
	inline cocos2d::CCMenu*&		menu(){ return m_menu; }
	inline cocos2d::CCMenuItemImage*&		menuItem_sell(){ return m_menuItem_sell; }
	inline cocos2d::CCMenuItemImage*&		menuItem_accept(){ return m_menuItem_accept; }
	inline cocos2d::CCMenuItemImage*&		menuItem_exit(){ return m_menuItem_exit; }
	inline cocos2d::CCLabelTTF*&		labelHonorWhenSell(){ return m_labelHonorWhenSell; }
	inline cocos2d::CCLabelTTF*&		labelTitle(){ return m_labelTitle; }
	inline cocos2d::CCLabelTTF*&		labelName(){ return m_labelName; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(CampHonorCardResultLayer*, m_campHonorCardResultLayer, CampHonorCardResultLayer);
};
#endif
