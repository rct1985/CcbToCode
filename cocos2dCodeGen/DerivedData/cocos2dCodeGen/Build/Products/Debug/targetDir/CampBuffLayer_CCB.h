//
//  CampBuffLayer_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__CampBuffLayer_CCB__
#define __autogen_ccbuilder__CampBuffLayer_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class CampBuffLayer;

class CampBuffLayer_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    CampBuffLayer_CCB()
    :CCLayer()

	,m_menu(0)
	,m_menuItem_exit(0)
{}
CREATE_FUNC(CampBuffLayer_CCB);


//Class Loader , modify it when necessary
class CampBuffLayer_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(CampBuffLayer_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(CampBuffLayer_CCB);
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

 //member will assigned form ccbi file
protected:
	cocos2d::CCMenu*		m_menu;
	cocos2d::CCMenuItemImage*		m_menuItem_exit;

 //member visit function
public:
	inline cocos2d::CCMenu*&		menu(){ return m_menu; }
	inline cocos2d::CCMenuItemImage*&		menuItem_exit(){ return m_menuItem_exit; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(CampBuffLayer*, m_campBuffLayer, CampBuffLayer);
};
#endif
