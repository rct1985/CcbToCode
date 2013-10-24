//
//  EquipmentList_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__EquipmentList_CCB__
#define __autogen_ccbuilder__EquipmentList_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class EquipmentList;

class EquipmentList_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    EquipmentList_CCB()
    :CCLayer()

	,m_gameMenu(0)
	,m_allButton(0)
	,m_weaponButton(0)
	,m_armorButton(0)
	,m_magicWeaponButton(0)
	,m_necklaceButton(0)
	,m_ringButton(0)
	,m_scrollArea(0)
	,m_backButton(0)
{}
CREATE_FUNC(EquipmentList_CCB);


//Class Loader , modify it when necessary
class EquipmentList_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(EquipmentList_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(EquipmentList_CCB);
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
	void selector_noneFilter(cocos2d::CCObject * pSender);
	void selector_weaponFilter(cocos2d::CCObject * pSender);
	void selector_armorFilter(cocos2d::CCObject * pSender);
	void selector_magicWeaponFilter(cocos2d::CCObject * pSender);
	void selector_necklaceFilter(cocos2d::CCObject * pSender);
	void selector_ringFilter(cocos2d::CCObject * pSender);
	void selector_back(cocos2d::CCObject * pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::CCMenu*		m_gameMenu;
	cocos2d::CCMenuItemImage*		m_allButton;
	cocos2d::CCMenuItemImage*		m_weaponButton;
	cocos2d::CCMenuItemImage*		m_armorButton;
	cocos2d::CCMenuItemImage*		m_magicWeaponButton;
	cocos2d::CCMenuItemImage*		m_necklaceButton;
	cocos2d::CCMenuItemImage*		m_ringButton;
	cocos2d::CCLayer*		m_scrollArea;
	cocos2d::CCMenuItemImage*		m_backButton;

 //member visit function
public:
	inline cocos2d::CCMenu*&		gameMenu(){ return m_gameMenu; }
	inline cocos2d::CCMenuItemImage*&		allButton(){ return m_allButton; }
	inline cocos2d::CCMenuItemImage*&		weaponButton(){ return m_weaponButton; }
	inline cocos2d::CCMenuItemImage*&		armorButton(){ return m_armorButton; }
	inline cocos2d::CCMenuItemImage*&		magicWeaponButton(){ return m_magicWeaponButton; }
	inline cocos2d::CCMenuItemImage*&		necklaceButton(){ return m_necklaceButton; }
	inline cocos2d::CCMenuItemImage*&		ringButton(){ return m_ringButton; }
	inline cocos2d::CCLayer*&		scrollArea(){ return m_scrollArea; }
	inline cocos2d::CCMenuItemImage*&		backButton(){ return m_backButton; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(EquipmentList*, m_equipmentList, EquipmentList);
};
#endif
