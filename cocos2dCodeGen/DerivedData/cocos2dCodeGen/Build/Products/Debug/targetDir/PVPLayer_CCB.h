//
//  PVPLayer_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__PVPLayer_CCB__
#define __autogen_ccbuilder__PVPLayer_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class PVPLayer;

class PVPLayer_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    PVPLayer_CCB()
    :CCLayer()

	,m_labelOrder(0)
	,m_labelBelieve(0)
	,m_labelWinFactor(0)
	,m_labelName(0)
	,m_labeLevel(0)
	,m_labelChallageTimes(0)
	,m_menu(0)
	,m_menuItem_exit(0)
	,m_menuItem_confirm(0)
{}
CREATE_FUNC(PVPLayer_CCB);


//Class Loader , modify it when necessary
class PVPLayer_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(PVPLayer_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(PVPLayer_CCB);
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
	void clickButton_refresh(cocos2d::CCObject * pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::CCLabelTTF*		m_labelOrder;
	cocos2d::CCLabelTTF*		m_labelBelieve;
	cocos2d::CCLabelTTF*		m_labelWinFactor;
	cocos2d::CCLabelTTF*		m_labelName;
	cocos2d::CCLabelTTF*		m_labeLevel;
	cocos2d::CCLabelTTF*		m_labelChallageTimes;
	cocos2d::CCMenu*		m_menu;
	cocos2d::CCMenuItemImage*		m_menuItem_exit;
	cocos2d::CCMenuItemImage*		m_menuItem_confirm;

 //member visit function
public:
	inline cocos2d::CCLabelTTF*&		labelOrder(){ return m_labelOrder; }
	inline cocos2d::CCLabelTTF*&		labelBelieve(){ return m_labelBelieve; }
	inline cocos2d::CCLabelTTF*&		labelWinFactor(){ return m_labelWinFactor; }
	inline cocos2d::CCLabelTTF*&		labelName(){ return m_labelName; }
	inline cocos2d::CCLabelTTF*&		labeLevel(){ return m_labeLevel; }
	inline cocos2d::CCLabelTTF*&		labelChallageTimes(){ return m_labelChallageTimes; }
	inline cocos2d::CCMenu*&		menu(){ return m_menu; }
	inline cocos2d::CCMenuItemImage*&		menuItem_exit(){ return m_menuItem_exit; }
	inline cocos2d::CCMenuItemImage*&		menuItem_confirm(){ return m_menuItem_confirm; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(PVPLayer*, m_pVPLayer, PVPLayer);
};
#endif
