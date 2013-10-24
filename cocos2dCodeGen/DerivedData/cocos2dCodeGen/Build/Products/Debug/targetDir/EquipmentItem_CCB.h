//
//  EquipmentItem_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__EquipmentItem_CCB__
#define __autogen_ccbuilder__EquipmentItem_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class EquipmentItem;

class EquipmentItem_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    EquipmentItem_CCB()
    :CCLayer()

	,m_name(0)
	,m_level(0)
	,m_icon(0)
	,m_iconButton(0)
	,m_type(0)
	,m_star(0)
	,m_property(0)
	,m_owner(0)
	,m_upgradeButton(0)
	,m_equipButton(0)
{}
CREATE_FUNC(EquipmentItem_CCB);


//Class Loader , modify it when necessary
class EquipmentItem_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(EquipmentItem_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(EquipmentItem_CCB);
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
	void selector_upgrade(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);
	void selector_equip(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);

 // menu call back fuction 
protected:
	void selector_iconButton(cocos2d::CCObject * pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::CCLabelTTF*		m_name;
	cocos2d::CCLabelTTF*		m_level;
	cocos2d::CCSprite*		m_icon;
	cocos2d::CCMenu*		m_iconButton;
	cocos2d::CCLabelTTF*		m_type;
	cocos2d::CCLabelTTF*		m_star;
	cocos2d::CCLabelTTF*		m_property;
	cocos2d::CCLabelTTF*		m_owner;
	cocos2d::extension::CCControlButton*		m_upgradeButton;
	cocos2d::extension::CCControlButton*		m_equipButton;

 //member visit function
public:
	inline cocos2d::CCLabelTTF*&		name(){ return m_name; }
	inline cocos2d::CCLabelTTF*&		level(){ return m_level; }
	inline cocos2d::CCSprite*&		icon(){ return m_icon; }
	inline cocos2d::CCMenu*&		iconButton(){ return m_iconButton; }
	inline cocos2d::CCLabelTTF*&		type(){ return m_type; }
	inline cocos2d::CCLabelTTF*&		star(){ return m_star; }
	inline cocos2d::CCLabelTTF*&		property(){ return m_property; }
	inline cocos2d::CCLabelTTF*&		owner(){ return m_owner; }
	inline cocos2d::extension::CCControlButton*&		upgradeButton(){ return m_upgradeButton; }
	inline cocos2d::extension::CCControlButton*&		equipButton(){ return m_equipButton; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(EquipmentItem*, m_equipmentItem, EquipmentItem);
};
#endif
