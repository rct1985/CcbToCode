//
//  TransferItem_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__TransferItem_CCB__
#define __autogen_ccbuilder__TransferItem_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class TransferItem;

class TransferItem_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    TransferItem_CCB()
    :CCLayer()

	,m_icon(0)
	,m_name(0)
	,m_amount(0)
	,m_selectMenu(0)
	,m_exp(0)
	,m_level(0)
	,m_newLevel(0)
{}
CREATE_FUNC(TransferItem_CCB);


//Class Loader , modify it when necessary
class TransferItem_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(TransferItem_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(TransferItem_CCB);
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
	void selector_selected(cocos2d::CCObject * pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::CCSprite*		m_icon;
	cocos2d::CCLabelTTF*		m_name;
	cocos2d::CCLabelTTF*		m_amount;
	cocos2d::CCMenuItemImage*		m_selectMenu;
	cocos2d::CCLabelTTF*		m_exp;
	cocos2d::CCLabelTTF*		m_level;
	cocos2d::CCLabelTTF*		m_newLevel;

 //member visit function
public:
	inline cocos2d::CCSprite*&		icon(){ return m_icon; }
	inline cocos2d::CCLabelTTF*&		name(){ return m_name; }
	inline cocos2d::CCLabelTTF*&		amount(){ return m_amount; }
	inline cocos2d::CCMenuItemImage*&		selectMenu(){ return m_selectMenu; }
	inline cocos2d::CCLabelTTF*&		exp(){ return m_exp; }
	inline cocos2d::CCLabelTTF*&		level(){ return m_level; }
	inline cocos2d::CCLabelTTF*&		newLevel(){ return m_newLevel; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(TransferItem*, m_transferItem, TransferItem);
};
#endif
