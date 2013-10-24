//
//  CampCityLayer_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__CampCityLayer_CCB__
#define __autogen_ccbuilder__CampCityLayer_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class CampCityLayer;

class CampCityLayer_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    CampCityLayer_CCB()
    :CCLayer()

	,m_labelCityName(0)
	,m_labelCampName(0)
	,m_labelHardiness(0)
	,m_labelBuffName(0)
	,m_menu(0)
	,m_menuItem_exit(0)
	,m_menuItem_attack(0)
	,m_menuItem_defence(0)
{}
CREATE_FUNC(CampCityLayer_CCB);


//Class Loader , modify it when necessary
class CampCityLayer_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(CampCityLayer_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(CampCityLayer_CCB);
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
	void clickButton_attack(cocos2d::CCObject * pSender);
	void clickButton_defence(cocos2d::CCObject * pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::CCLabelTTF*		m_labelCityName;
	cocos2d::CCLabelTTF*		m_labelCampName;
	cocos2d::CCLabelTTF*		m_labelHardiness;
	cocos2d::CCLabelTTF*		m_labelBuffName;
	cocos2d::CCMenu*		m_menu;
	cocos2d::CCMenuItemImage*		m_menuItem_exit;
	cocos2d::CCMenuItemImage*		m_menuItem_attack;
	cocos2d::CCMenuItemImage*		m_menuItem_defence;

 //member visit function
public:
	inline cocos2d::CCLabelTTF*&		labelCityName(){ return m_labelCityName; }
	inline cocos2d::CCLabelTTF*&		labelCampName(){ return m_labelCampName; }
	inline cocos2d::CCLabelTTF*&		labelHardiness(){ return m_labelHardiness; }
	inline cocos2d::CCLabelTTF*&		labelBuffName(){ return m_labelBuffName; }
	inline cocos2d::CCMenu*&		menu(){ return m_menu; }
	inline cocos2d::CCMenuItemImage*&		menuItem_exit(){ return m_menuItem_exit; }
	inline cocos2d::CCMenuItemImage*&		menuItem_attack(){ return m_menuItem_attack; }
	inline cocos2d::CCMenuItemImage*&		menuItem_defence(){ return m_menuItem_defence; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(CampCityLayer*, m_campCityLayer, CampCityLayer);
};
#endif
