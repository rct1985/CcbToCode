//
//  EquipInfo_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__EquipInfo_CCB__
#define __autogen_ccbuilder__EquipInfo_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class EquipInfo;

class EquipInfo_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    EquipInfo_CCB()
    :CCLayer()

	,m_rootLayer(0)
	,m_buttons(0)
	,m_backButton(0)
	,m_sellButton(0)
	,m_upgradeButton(0)
	,m_equipButton(0)
	,m_name(0)
	,m_icon(0)
	,m_type(0)
	,m_star(0)
	,m_level(0)
	,m_property_0(0)
	,m_property_1(0)
	,m_property_2(0)
	,m_discription(0)
	,m_sellConfirmLayer(0)
	,m_sellWarningText(0)
	,m_sellLayerButtons(0)
{}
CREATE_FUNC(EquipInfo_CCB);


//Class Loader , modify it when necessary
class EquipInfo_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(EquipInfo_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(EquipInfo_CCB);
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
	void selector_back(cocos2d::CCObject * pSender);
	void selector_sell(cocos2d::CCObject * pSender);
	void selector_upgrade(cocos2d::CCObject * pSender);
	void selector_equip(cocos2d::CCObject * pSender);
	void selector_sellConfirm(cocos2d::CCObject * pSender);
	void selector_sellCancel(cocos2d::CCObject * pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::CCLayerColor*		m_rootLayer;
	cocos2d::CCMenu*		m_buttons;
	cocos2d::CCMenuItemImage*		m_backButton;
	cocos2d::CCMenuItemImage*		m_sellButton;
	cocos2d::CCMenuItemImage*		m_upgradeButton;
	cocos2d::CCMenuItemImage*		m_equipButton;
	cocos2d::CCLabelTTF*		m_name;
	cocos2d::CCSprite*		m_icon;
	cocos2d::CCLabelTTF*		m_type;
	cocos2d::CCSprite*		m_star;
	cocos2d::CCLabelTTF*		m_level;
	cocos2d::CCLabelTTF*		m_property_0;
	cocos2d::CCLabelTTF*		m_property_1;
	cocos2d::CCLabelTTF*		m_property_2;
	cocos2d::CCLabelTTF*		m_discription;
	cocos2d::CCLayerColor*		m_sellConfirmLayer;
	cocos2d::CCLabelTTF*		m_sellWarningText;
	cocos2d::CCMenu*		m_sellLayerButtons;

 //member visit function
public:
	inline cocos2d::CCLayerColor*&		rootLayer(){ return m_rootLayer; }
	inline cocos2d::CCMenu*&		buttons(){ return m_buttons; }
	inline cocos2d::CCMenuItemImage*&		backButton(){ return m_backButton; }
	inline cocos2d::CCMenuItemImage*&		sellButton(){ return m_sellButton; }
	inline cocos2d::CCMenuItemImage*&		upgradeButton(){ return m_upgradeButton; }
	inline cocos2d::CCMenuItemImage*&		equipButton(){ return m_equipButton; }
	inline cocos2d::CCLabelTTF*&		name(){ return m_name; }
	inline cocos2d::CCSprite*&		icon(){ return m_icon; }
	inline cocos2d::CCLabelTTF*&		type(){ return m_type; }
	inline cocos2d::CCSprite*&		star(){ return m_star; }
	inline cocos2d::CCLabelTTF*&		level(){ return m_level; }
	inline cocos2d::CCLabelTTF*&		property_0(){ return m_property_0; }
	inline cocos2d::CCLabelTTF*&		property_1(){ return m_property_1; }
	inline cocos2d::CCLabelTTF*&		property_2(){ return m_property_2; }
	inline cocos2d::CCLabelTTF*&		discription(){ return m_discription; }
	inline cocos2d::CCLayerColor*&		sellConfirmLayer(){ return m_sellConfirmLayer; }
	inline cocos2d::CCLabelTTF*&		sellWarningText(){ return m_sellWarningText; }
	inline cocos2d::CCMenu*&		sellLayerButtons(){ return m_sellLayerButtons; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(EquipInfo*, m_equipInfo, EquipInfo);
};
#endif
