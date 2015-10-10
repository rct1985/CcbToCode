//
//  Formation_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  
//  for cocos2dx_3_x
//

#ifndef __autogen_ccbuilder__Formation_CCB__
#define __autogen_ccbuilder__Formation_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "editor-support/cocosbuilder/CocosBuilder.h"


class Formation;

class Formation_CCB
:public cocos2d::Layer
, public cocosbuilder::CCBSelectorResolver
, public cocosbuilder::CCBMemberVariableAssigner
, public cocosbuilder::NodeLoaderListener

{
public:
    Formation_CCB()
    :Layer()

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
virtual ~ Formation_CCB(){
//	CC_SAFE_RELEASE_NULL(m_battleArray);
//	CC_SAFE_RELEASE_NULL(m_arrayButton4);
//	CC_SAFE_RELEASE_NULL(m_arrayButton1);
//	CC_SAFE_RELEASE_NULL(m_arrayButton5);
//	CC_SAFE_RELEASE_NULL(m_arrayButton2);
//	CC_SAFE_RELEASE_NULL(m_arrayButton6);
//	CC_SAFE_RELEASE_NULL(m_arrayButton3);
//	CC_SAFE_RELEASE_NULL(m_score);
//	CC_SAFE_RELEASE_NULL(m_defence);
//	CC_SAFE_RELEASE_NULL(m_speed);
//	CC_SAFE_RELEASE_NULL(m_inumFormation);
//	CC_SAFE_RELEASE_NULL(m_magicDefence);
//	CC_SAFE_RELEASE_NULL(m_leadership);
//	CC_SAFE_RELEASE_NULL(m_damage);
//	CC_SAFE_RELEASE_NULL(m_magicDamage);
//	CC_SAFE_RELEASE_NULL(m_hp);
//	CC_SAFE_RELEASE_NULL(m_layerDetail);
//	CC_SAFE_RELEASE_NULL(m_title);
//	CC_SAFE_RELEASE_NULL(m_detailIcon);
//	CC_SAFE_RELEASE_NULL(m_detail);
//	CC_SAFE_RELEASE_NULL(m_layerList);
//	CC_SAFE_RELEASE_NULL(m_listIcon0);
//	CC_SAFE_RELEASE_NULL(m_listIcon1);
//	CC_SAFE_RELEASE_NULL(m_listIcon2);
//	CC_SAFE_RELEASE_NULL(m_listIcon3);
//	CC_SAFE_RELEASE_NULL(m_listIcon4);
//	CC_SAFE_RELEASE_NULL(m_listIcon5);
//	CC_SAFE_RELEASE_NULL(m_listIcon6);
//	CC_SAFE_RELEASE_NULL(m_listIcon7);
}

CREATE_FUNC(Formation_CCB);


//Class Loader , modify it when necessary
class Formation_CCBLoader : public cocosbuilder::LayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(Formation_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(Formation_CCB);
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
	void selector_back(Ref* pSender);
	void selector_quickGroup(Ref* pSender);
	void selector_showGroupList(Ref* pSender);
	void selector_showGroupDetail(Ref* pSender);

 // menu call back fuction 
protected:
	void selector_showCard(cocos2d::Ref* pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::Menu*		m_battleArray;
	cocos2d::MenuItemImage*		m_arrayButton4;
	cocos2d::MenuItemImage*		m_arrayButton1;
	cocos2d::MenuItemImage*		m_arrayButton5;
	cocos2d::MenuItemImage*		m_arrayButton2;
	cocos2d::MenuItemImage*		m_arrayButton6;
	cocos2d::MenuItemImage*		m_arrayButton3;
	cocos2d::Label*		m_score;
	cocos2d::Label*		m_defence;
	cocos2d::Label*		m_speed;
	cocos2d::Label*		m_inumFormation;
	cocos2d::Label*		m_magicDefence;
	cocos2d::Label*		m_leadership;
	cocos2d::Label*		m_damage;
	cocos2d::Label*		m_magicDamage;
	cocos2d::Label*		m_hp;
	cocos2d::Layer*		m_layerDetail;
	cocos2d::Label*		m_title;
	cocos2d::Sprite*		m_detailIcon;
	cocos2d::Label*		m_detail;
	cocos2d::Layer*		m_layerList;
	cocos2d::extension::ControlButton*		m_listIcon0;
	cocos2d::extension::ControlButton*		m_listIcon1;
	cocos2d::extension::ControlButton*		m_listIcon2;
	cocos2d::extension::ControlButton*		m_listIcon3;
	cocos2d::extension::ControlButton*		m_listIcon4;
	cocos2d::extension::ControlButton*		m_listIcon5;
	cocos2d::extension::ControlButton*		m_listIcon6;
	cocos2d::extension::ControlButton*		m_listIcon7;

 //member visit function
public:
	inline cocos2d::Menu*&		battleArray(){ return m_battleArray; }
	inline cocos2d::MenuItemImage*&		arrayButton4(){ return m_arrayButton4; }
	inline cocos2d::MenuItemImage*&		arrayButton1(){ return m_arrayButton1; }
	inline cocos2d::MenuItemImage*&		arrayButton5(){ return m_arrayButton5; }
	inline cocos2d::MenuItemImage*&		arrayButton2(){ return m_arrayButton2; }
	inline cocos2d::MenuItemImage*&		arrayButton6(){ return m_arrayButton6; }
	inline cocos2d::MenuItemImage*&		arrayButton3(){ return m_arrayButton3; }
	inline cocos2d::Label*&		score(){ return m_score; }
	inline cocos2d::Label*&		defence(){ return m_defence; }
	inline cocos2d::Label*&		speed(){ return m_speed; }
	inline cocos2d::Label*&		inumFormation(){ return m_inumFormation; }
	inline cocos2d::Label*&		magicDefence(){ return m_magicDefence; }
	inline cocos2d::Label*&		leadership(){ return m_leadership; }
	inline cocos2d::Label*&		damage(){ return m_damage; }
	inline cocos2d::Label*&		magicDamage(){ return m_magicDamage; }
	inline cocos2d::Label*&		hp(){ return m_hp; }
	inline cocos2d::Layer*&		layerDetail(){ return m_layerDetail; }
	inline cocos2d::Label*&		title(){ return m_title; }
	inline cocos2d::Sprite*&		detailIcon(){ return m_detailIcon; }
	inline cocos2d::Label*&		detail(){ return m_detail; }
	inline cocos2d::Layer*&		layerList(){ return m_layerList; }
	inline cocos2d::extension::ControlButton*&		listIcon0(){ return m_listIcon0; }
	inline cocos2d::extension::ControlButton*&		listIcon1(){ return m_listIcon1; }
	inline cocos2d::extension::ControlButton*&		listIcon2(){ return m_listIcon2; }
	inline cocos2d::extension::ControlButton*&		listIcon3(){ return m_listIcon3; }
	inline cocos2d::extension::ControlButton*&		listIcon4(){ return m_listIcon4; }
	inline cocos2d::extension::ControlButton*&		listIcon5(){ return m_listIcon5; }
	inline cocos2d::extension::ControlButton*&		listIcon6(){ return m_listIcon6; }
	inline cocos2d::extension::ControlButton*&		listIcon7(){ return m_listIcon7; }

 //CustomMember visit function

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(Formation*, m_formation, Formation);
};
#endif
