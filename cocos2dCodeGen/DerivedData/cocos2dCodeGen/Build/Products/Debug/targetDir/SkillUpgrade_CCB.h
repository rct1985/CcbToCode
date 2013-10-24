//
//  SkillUpgrade_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__SkillUpgrade_CCB__
#define __autogen_ccbuilder__SkillUpgrade_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class SkillUpgrade;

class SkillUpgrade_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    SkillUpgrade_CCB()
    :CCLayer()

	,m_buttons(0)
	,m_card0(0)
	,m_skillIcon0(0)
	,m_skillName0(0)
	,m_card1(0)
	,m_levelText0(0)
	,m_skillIcon1(0)
	,m_skillName1(0)
	,m_levelText1(0)
	,m_cardScrollArea(0)
	,m_pecentage(0)
{}
CREATE_FUNC(SkillUpgrade_CCB);


//Class Loader , modify it when necessary
class SkillUpgrade_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(SkillUpgrade_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(SkillUpgrade_CCB);
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
	void selector_transfer(cocos2d::CCObject * pSender);
	void selector_select_item(cocos2d::CCObject * pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::CCMenu*		m_buttons;
	cocos2d::CCSprite*		m_card0;
	cocos2d::CCSprite*		m_skillIcon0;
	cocos2d::CCLabelTTF*		m_skillName0;
	cocos2d::CCSprite*		m_card1;
	cocos2d::CCLabelTTF*		m_levelText0;
	cocos2d::CCSprite*		m_skillIcon1;
	cocos2d::CCLabelTTF*		m_skillName1;
	cocos2d::CCLabelTTF*		m_levelText1;
	cocos2d::CCLayer*		m_cardScrollArea;
	cocos2d::CCLabelTTF*		m_pecentage;

 //member visit function
public:
	inline cocos2d::CCMenu*&		buttons(){ return m_buttons; }
	inline cocos2d::CCSprite*&		card0(){ return m_card0; }
	inline cocos2d::CCSprite*&		skillIcon0(){ return m_skillIcon0; }
	inline cocos2d::CCLabelTTF*&		skillName0(){ return m_skillName0; }
	inline cocos2d::CCSprite*&		card1(){ return m_card1; }
	inline cocos2d::CCLabelTTF*&		levelText0(){ return m_levelText0; }
	inline cocos2d::CCSprite*&		skillIcon1(){ return m_skillIcon1; }
	inline cocos2d::CCLabelTTF*&		skillName1(){ return m_skillName1; }
	inline cocos2d::CCLabelTTF*&		levelText1(){ return m_levelText1; }
	inline cocos2d::CCLayer*&		cardScrollArea(){ return m_cardScrollArea; }
	inline cocos2d::CCLabelTTF*&		pecentage(){ return m_pecentage; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(SkillUpgrade*, m_skillUpgrade, SkillUpgrade);
};
#endif
