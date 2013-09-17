//
//  FollowerProperty_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__FollowerProperty_CCB__
#define __autogen_ccbuilder__FollowerProperty_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class FollowerProperty;

class FollowerProperty_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    FollowerProperty_CCB()
    :CCLayer()

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
CREATE_FUNC(FollowerProperty_CCB);


//Class Loader , modify it when necessary
class FollowerProperty_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(FollowerProperty_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(FollowerProperty_CCB);
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
	void selector_weapon(cocos2d::CCObject * pSender);
	void selector_armor(cocos2d::CCObject * pSender);
	void selector_trump(cocos2d::CCObject * pSender);
	void selector_necklace(cocos2d::CCObject * pSender);
	void selector_ring(cocos2d::CCObject * pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::CCLabelTTF*		m_name;
	cocos2d::CCLabelTTF*		m_faction;
	cocos2d::CCLabelTTF*		m_level;
	cocos2d::CCLabelTTF*		m_power;
	cocos2d::CCMenu*		m_equiptMenu;
	cocos2d::CCMenuItemImage*		m_weaponButton;
	cocos2d::CCMenuItemImage*		m_armorButton;
	cocos2d::CCMenuItemImage*		m_trumpButton;
	cocos2d::CCMenuItemImage*		m_necklaceButton;
	cocos2d::CCMenuItemImage*		m_ringButton;
	cocos2d::CCLabelTTF*		m_health;
	cocos2d::CCLabelTTF*		m_speed;
	cocos2d::CCLabelTTF*		m_attack;
	cocos2d::CCLabelTTF*		m_magicAttack;
	cocos2d::CCLabelTTF*		m_defence;
	cocos2d::CCLabelTTF*		m_magicDefence;
	cocos2d::CCLayer*		m_cardLayer;

 //member visit function
public:
	inline cocos2d::CCLabelTTF*&		name(){ return m_name; }
	inline cocos2d::CCLabelTTF*&		faction(){ return m_faction; }
	inline cocos2d::CCLabelTTF*&		level(){ return m_level; }
	inline cocos2d::CCLabelTTF*&		power(){ return m_power; }
	inline cocos2d::CCMenu*&		equiptMenu(){ return m_equiptMenu; }
	inline cocos2d::CCMenuItemImage*&		weaponButton(){ return m_weaponButton; }
	inline cocos2d::CCMenuItemImage*&		armorButton(){ return m_armorButton; }
	inline cocos2d::CCMenuItemImage*&		trumpButton(){ return m_trumpButton; }
	inline cocos2d::CCMenuItemImage*&		necklaceButton(){ return m_necklaceButton; }
	inline cocos2d::CCMenuItemImage*&		ringButton(){ return m_ringButton; }
	inline cocos2d::CCLabelTTF*&		health(){ return m_health; }
	inline cocos2d::CCLabelTTF*&		speed(){ return m_speed; }
	inline cocos2d::CCLabelTTF*&		attack(){ return m_attack; }
	inline cocos2d::CCLabelTTF*&		magicAttack(){ return m_magicAttack; }
	inline cocos2d::CCLabelTTF*&		defence(){ return m_defence; }
	inline cocos2d::CCLabelTTF*&		magicDefence(){ return m_magicDefence; }
	inline cocos2d::CCLayer*&		cardLayer(){ return m_cardLayer; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(FollowerProperty*, m_followerProperty, FollowerProperty);
};
#endif
