//
//  FollowerProperty_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  
//  for cocos2dx_3_x
//

#ifndef __autogen_ccbuilder__FollowerProperty_CCB__
#define __autogen_ccbuilder__FollowerProperty_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "editor-support/cocosbuilder/CocosBuilder.h"


class FollowerProperty;

class FollowerProperty_CCB
:public cocos2d::Layer
, public cocosbuilder::CCBSelectorResolver
, public cocosbuilder::CCBMemberVariableAssigner
, public cocosbuilder::NodeLoaderListener

{
public:
    FollowerProperty_CCB()
    :Layer()

	,m_name(0)
	,m_faction(0)
	,m_level(0)
	,m_power(0)
	,m_equiptMenu(0)
	,m_weaponButton(0)
	,m_armorButton(0)
	,m_trumpButton(0)
	,m_necklaceButton(0)
	,m_ringButton(0)
	,m_health(0)
	,m_speed(0)
	,m_attack(0)
	,m_magicAttack(0)
	,m_defence(0)
	,m_magicDefence(0)
	,m_cardLayer(0)
{}
virtual ~ FollowerProperty_CCB(){
//	CC_SAFE_RELEASE_NULL(m_name);
//	CC_SAFE_RELEASE_NULL(m_faction);
//	CC_SAFE_RELEASE_NULL(m_level);
//	CC_SAFE_RELEASE_NULL(m_power);
//	CC_SAFE_RELEASE_NULL(m_equiptMenu);
//	CC_SAFE_RELEASE_NULL(m_weaponButton);
//	CC_SAFE_RELEASE_NULL(m_armorButton);
//	CC_SAFE_RELEASE_NULL(m_trumpButton);
//	CC_SAFE_RELEASE_NULL(m_necklaceButton);
//	CC_SAFE_RELEASE_NULL(m_ringButton);
//	CC_SAFE_RELEASE_NULL(m_health);
//	CC_SAFE_RELEASE_NULL(m_speed);
//	CC_SAFE_RELEASE_NULL(m_attack);
//	CC_SAFE_RELEASE_NULL(m_magicAttack);
//	CC_SAFE_RELEASE_NULL(m_defence);
//	CC_SAFE_RELEASE_NULL(m_magicDefence);
//	CC_SAFE_RELEASE_NULL(m_cardLayer);
}

CREATE_FUNC(FollowerProperty_CCB);


//Class Loader , modify it when necessary
class FollowerProperty_CCBLoader : public cocosbuilder::LayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(FollowerProperty_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(FollowerProperty_CCB);
};

//virtual function from base !
protected:
    virtual cocos2d::SEL_MenuHandler onResolveCCBCCMenuItemSelector(cocos2d::Ref * pTarget, const char * pSelectorName);
    virtual cocos2d::extension::Control::Handler onResolveCCBCCControlSelector(cocos2d::Ref * pTarget, const char * pSelectorName);
    virtual bool onAssignCCBMemberVariable(cocos2d::Ref * pTarget, const char * pMemberVariableName, cocos2d::Node * pNode);
    virtual void onNodeLoaded(cocos2d::Node * pNode, cocosbuilder::NodeLoader * pNodeLoader);
    virtual bool onAssignCCBCustomProperty(Ref* pTarget, const char* pMemberVariableName, cocos2d::Value& pCCBValue);

 //control call back function;
protected:

 // menu call back fuction 
protected:
	void selector_back(cocos2d::Ref* pSender);
	void selector_weapon(cocos2d::Ref* pSender);
	void selector_armor(cocos2d::Ref* pSender);
	void selector_trump(cocos2d::Ref* pSender);
	void selector_necklace(cocos2d::Ref* pSender);
	void selector_ring(cocos2d::Ref* pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::Label*		m_name;
	cocos2d::Label*		m_faction;
	cocos2d::Label*		m_level;
	cocos2d::Label*		m_power;
	cocos2d::Menu*		m_equiptMenu;
	cocos2d::MenuItemImage*		m_weaponButton;
	cocos2d::MenuItemImage*		m_armorButton;
	cocos2d::MenuItemImage*		m_trumpButton;
	cocos2d::MenuItemImage*		m_necklaceButton;
	cocos2d::MenuItemImage*		m_ringButton;
	cocos2d::Label*		m_health;
	cocos2d::Label*		m_speed;
	cocos2d::Label*		m_attack;
	cocos2d::Label*		m_magicAttack;
	cocos2d::Label*		m_defence;
	cocos2d::Label*		m_magicDefence;
	cocos2d::Layer*		m_cardLayer;

 //member visit function
public:
	inline cocos2d::Label*&		name(){ return m_name; }
	inline cocos2d::Label*&		faction(){ return m_faction; }
	inline cocos2d::Label*&		level(){ return m_level; }
	inline cocos2d::Label*&		power(){ return m_power; }
	inline cocos2d::Menu*&		equiptMenu(){ return m_equiptMenu; }
	inline cocos2d::MenuItemImage*&		weaponButton(){ return m_weaponButton; }
	inline cocos2d::MenuItemImage*&		armorButton(){ return m_armorButton; }
	inline cocos2d::MenuItemImage*&		trumpButton(){ return m_trumpButton; }
	inline cocos2d::MenuItemImage*&		necklaceButton(){ return m_necklaceButton; }
	inline cocos2d::MenuItemImage*&		ringButton(){ return m_ringButton; }
	inline cocos2d::Label*&		health(){ return m_health; }
	inline cocos2d::Label*&		speed(){ return m_speed; }
	inline cocos2d::Label*&		attack(){ return m_attack; }
	inline cocos2d::Label*&		magicAttack(){ return m_magicAttack; }
	inline cocos2d::Label*&		defence(){ return m_defence; }
	inline cocos2d::Label*&		magicDefence(){ return m_magicDefence; }
	inline cocos2d::Layer*&		cardLayer(){ return m_cardLayer; }

 //CustomMember visit function

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(FollowerProperty*, m_followerProperty, FollowerProperty);
};
#endif
