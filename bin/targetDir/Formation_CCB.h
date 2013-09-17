//
//  Formation_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__Formation_CCB__
#define __autogen_ccbuilder__Formation_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class Formation;

class Formation_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    Formation_CCB()
    :CCLayer()

	,m_battleArray(0)
	,m_arrayButton4(0)
	,m_arrayButton1(0)
	,m_arrayButton5(0)
	,m_arrayButton2(0)
	,m_arrayButton6(0)
	,m_arrayButton3(0)
	,m_score(0)
	,m_defence(0)
	,m_speed(0)
	,m_inumFormation(0)
	,m_magicDefence(0)
	,m_leadership(0)
	,m_damage(0)
	,m_magicDamage(0)
	,m_hp(0)
	,m_layerDetail(0)
	,m_title(0)
	,m_detailIcon(0)
	,m_detail(0)
	,m_layerList(0)
	,m_listIcon0(0)
	,m_listIcon1(0)
	,m_listIcon2(0)
	,m_listIcon3(0)
	,m_listIcon4(0)
	,m_listIcon5(0)
	,m_listIcon6(0)
	,m_listIcon7(0)
{}
CREATE_FUNC(Formation_CCB);


//Class Loader , modify it when necessary
class Formation_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(Formation_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(Formation_CCB);
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
	void selector_back(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);
	void selector_quickGroup(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);
	void selector_showGroupList(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);
	void selector_showGroupDetail(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);

 // menu call back fuction 
protected:
	void selector_showCard(cocos2d::CCObject * pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::CCMenu*		m_battleArray;
	cocos2d::CCMenuItemImage*		m_arrayButton4;
	cocos2d::CCMenuItemImage*		m_arrayButton1;
	cocos2d::CCMenuItemImage*		m_arrayButton5;
	cocos2d::CCMenuItemImage*		m_arrayButton2;
	cocos2d::CCMenuItemImage*		m_arrayButton6;
	cocos2d::CCMenuItemImage*		m_arrayButton3;
	cocos2d::CCLabelTTF*		m_score;
	cocos2d::CCLabelTTF*		m_defence;
	cocos2d::CCLabelTTF*		m_speed;
	cocos2d::CCLabelTTF*		m_inumFormation;
	cocos2d::CCLabelTTF*		m_magicDefence;
	cocos2d::CCLabelTTF*		m_leadership;
	cocos2d::CCLabelTTF*		m_damage;
	cocos2d::CCLabelTTF*		m_magicDamage;
	cocos2d::CCLabelTTF*		m_hp;
	cocos2d::CCLayer*		m_layerDetail;
	cocos2d::CCLabelTTF*		m_title;
	cocos2d::CCSprite*		m_detailIcon;
	cocos2d::CCLabelTTF*		m_detail;
	cocos2d::CCLayer*		m_layerList;
	cocos2d::extension::CCControlButton*		m_listIcon0;
	cocos2d::extension::CCControlButton*		m_listIcon1;
	cocos2d::extension::CCControlButton*		m_listIcon2;
	cocos2d::extension::CCControlButton*		m_listIcon3;
	cocos2d::extension::CCControlButton*		m_listIcon4;
	cocos2d::extension::CCControlButton*		m_listIcon5;
	cocos2d::extension::CCControlButton*		m_listIcon6;
	cocos2d::extension::CCControlButton*		m_listIcon7;

 //member visit function
public:
	inline cocos2d::CCMenu*&		battleArray(){ return m_battleArray; }
	inline cocos2d::CCMenuItemImage*&		arrayButton4(){ return m_arrayButton4; }
	inline cocos2d::CCMenuItemImage*&		arrayButton1(){ return m_arrayButton1; }
	inline cocos2d::CCMenuItemImage*&		arrayButton5(){ return m_arrayButton5; }
	inline cocos2d::CCMenuItemImage*&		arrayButton2(){ return m_arrayButton2; }
	inline cocos2d::CCMenuItemImage*&		arrayButton6(){ return m_arrayButton6; }
	inline cocos2d::CCMenuItemImage*&		arrayButton3(){ return m_arrayButton3; }
	inline cocos2d::CCLabelTTF*&		score(){ return m_score; }
	inline cocos2d::CCLabelTTF*&		defence(){ return m_defence; }
	inline cocos2d::CCLabelTTF*&		speed(){ return m_speed; }
	inline cocos2d::CCLabelTTF*&		inumFormation(){ return m_inumFormation; }
	inline cocos2d::CCLabelTTF*&		magicDefence(){ return m_magicDefence; }
	inline cocos2d::CCLabelTTF*&		leadership(){ return m_leadership; }
	inline cocos2d::CCLabelTTF*&		damage(){ return m_damage; }
	inline cocos2d::CCLabelTTF*&		magicDamage(){ return m_magicDamage; }
	inline cocos2d::CCLabelTTF*&		hp(){ return m_hp; }
	inline cocos2d::CCLayer*&		layerDetail(){ return m_layerDetail; }
	inline cocos2d::CCLabelTTF*&		title(){ return m_title; }
	inline cocos2d::CCSprite*&		detailIcon(){ return m_detailIcon; }
	inline cocos2d::CCLabelTTF*&		detail(){ return m_detail; }
	inline cocos2d::CCLayer*&		layerList(){ return m_layerList; }
	inline cocos2d::extension::CCControlButton*&		listIcon0(){ return m_listIcon0; }
	inline cocos2d::extension::CCControlButton*&		listIcon1(){ return m_listIcon1; }
	inline cocos2d::extension::CCControlButton*&		listIcon2(){ return m_listIcon2; }
	inline cocos2d::extension::CCControlButton*&		listIcon3(){ return m_listIcon3; }
	inline cocos2d::extension::CCControlButton*&		listIcon4(){ return m_listIcon4; }
	inline cocos2d::extension::CCControlButton*&		listIcon5(){ return m_listIcon5; }
	inline cocos2d::extension::CCControlButton*&		listIcon6(){ return m_listIcon6; }
	inline cocos2d::extension::CCControlButton*&		listIcon7(){ return m_listIcon7; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(Formation*, m_formation, Formation);
};
#endif
