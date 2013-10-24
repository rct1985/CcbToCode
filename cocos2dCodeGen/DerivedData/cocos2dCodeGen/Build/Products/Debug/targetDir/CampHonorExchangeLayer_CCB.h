//
//  CampHonorExchangeLayer_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__CampHonorExchangeLayer_CCB__
#define __autogen_ccbuilder__CampHonorExchangeLayer_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class CampHonorExchangeLayer;

class CampHonorExchangeLayer_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    CampHonorExchangeLayer_CCB()
    :CCLayer()

	,m_labelCurHonor(0)
	,m_labelMaxHonor(0)
	,m_menu(0)
	,m_menuItem_exit(0)
	,m_menuItem_randomExchange(0)
	,m_layerForScrollView(0)
	,m_labelHonorCost_random(0)
{}
CREATE_FUNC(CampHonorExchangeLayer_CCB);


//Class Loader , modify it when necessary
class CampHonorExchangeLayer_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(CampHonorExchangeLayer_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(CampHonorExchangeLayer_CCB);
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
	void clickButton_exit(cocos2d::CCObject * pSender);
	void clickButton_randomExchange(cocos2d::CCObject * pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::CCLabelTTF*		m_labelCurHonor;
	cocos2d::CCLabelTTF*		m_labelMaxHonor;
	cocos2d::CCMenu*		m_menu;
	cocos2d::CCMenuItemImage*		m_menuItem_exit;
	cocos2d::CCMenuItemImage*		m_menuItem_randomExchange;
	cocos2d::CCLayerColor*		m_layerForScrollView;
	cocos2d::CCLabelTTF*		m_labelHonorCost_random;

 //member visit function
public:
	inline cocos2d::CCLabelTTF*&		labelCurHonor(){ return m_labelCurHonor; }
	inline cocos2d::CCLabelTTF*&		labelMaxHonor(){ return m_labelMaxHonor; }
	inline cocos2d::CCMenu*&		menu(){ return m_menu; }
	inline cocos2d::CCMenuItemImage*&		menuItem_exit(){ return m_menuItem_exit; }
	inline cocos2d::CCMenuItemImage*&		menuItem_randomExchange(){ return m_menuItem_randomExchange; }
	inline cocos2d::CCLayerColor*&		layerForScrollView(){ return m_layerForScrollView; }
	inline cocos2d::CCLabelTTF*&		labelHonorCost_random(){ return m_labelHonorCost_random; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(CampHonorExchangeLayer*, m_campHonorExchangeLayer, CampHonorExchangeLayer);
};
#endif
