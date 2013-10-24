//
//  SkillDetail_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__SkillDetail_CCB__
#define __autogen_ccbuilder__SkillDetail_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class SkillDetail;

class SkillDetail_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    SkillDetail_CCB()
    :CCLayer()

	,m_icon(0)
	,m_head(0)
	,m_desc(0)
	,m_menu(0)
	,m_change(0)
	,m_upgrade(0)
	,m_descNextLvl(0)
{}
CREATE_FUNC(SkillDetail_CCB);


//Class Loader , modify it when necessary
class SkillDetail_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(SkillDetail_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(SkillDetail_CCB);
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
	void sel_close(cocos2d::CCObject * pSender);
	void sel_change(cocos2d::CCObject * pSender);
	void sel_upgrade(cocos2d::CCObject * pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::CCSprite*		m_icon;
	cocos2d::CCLabelTTF*		m_head;
	cocos2d::CCLabelTTF*		m_desc;
	cocos2d::CCMenu*		m_menu;
	cocos2d::CCMenuItemImage*		m_change;
	cocos2d::CCMenuItemImage*		m_upgrade;
	cocos2d::CCLabelTTF*		m_descNextLvl;

 //member visit function
public:
	inline cocos2d::CCSprite*&		icon(){ return m_icon; }
	inline cocos2d::CCLabelTTF*&		head(){ return m_head; }
	inline cocos2d::CCLabelTTF*&		desc(){ return m_desc; }
	inline cocos2d::CCMenu*&		menu(){ return m_menu; }
	inline cocos2d::CCMenuItemImage*&		change(){ return m_change; }
	inline cocos2d::CCMenuItemImage*&		upgrade(){ return m_upgrade; }
	inline cocos2d::CCLabelTTF*&		descNextLvl(){ return m_descNextLvl; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(SkillDetail*, m_skillDetail, SkillDetail);
};
#endif
