//
//  SkillUpgradeItem_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__SkillUpgradeItem_CCB__
#define __autogen_ccbuilder__SkillUpgradeItem_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class SkillUpgradeItem;

class SkillUpgradeItem_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    SkillUpgradeItem_CCB()
    :CCLayer()

	,m_buttonSelect(0)
	,m_headIcon(0)
	,m_name(0)
	,m_level(0)
	,m_selectedMark(0)
{}
CREATE_FUNC(SkillUpgradeItem_CCB);


//Class Loader , modify it when necessary
class SkillUpgradeItem_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(SkillUpgradeItem_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(SkillUpgradeItem_CCB);
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
	void selector_select(cocos2d::CCObject * pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::CCMenuItemImage*		m_buttonSelect;
	cocos2d::CCSprite*		m_headIcon;
	cocos2d::CCLabelTTF*		m_name;
	cocos2d::CCLabelTTF*		m_level;
	cocos2d::CCSprite*		m_selectedMark;

 //member visit function
public:
	inline cocos2d::CCMenuItemImage*&		buttonSelect(){ return m_buttonSelect; }
	inline cocos2d::CCSprite*&		headIcon(){ return m_headIcon; }
	inline cocos2d::CCLabelTTF*&		name(){ return m_name; }
	inline cocos2d::CCLabelTTF*&		level(){ return m_level; }
	inline cocos2d::CCSprite*&		selectedMark(){ return m_selectedMark; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(SkillUpgradeItem*, m_skillUpgradeItem, SkillUpgradeItem);
};
#endif
