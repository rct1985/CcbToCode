//
//  ExpTransfer_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__ExpTransfer_CCB__
#define __autogen_ccbuilder__ExpTransfer_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class ExpTransfer;

class ExpTransfer_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    ExpTransfer_CCB()
    :CCLayer()

	,m_buttons(0)
	,m_cardName0(0)
	,m_cardimage0(0)
	,m_positionText0(0)
	,m_cardName1(0)
	,m_cardImage1(0)
	,m_positionText1(0)
	,m_starIcon0(0)
	,m_levelText0(0)
	,m_levelText1(0)
	,m_starIcon1(0)
	,m_itemScrollArea(0)
	,m_cardScrollArea(0)
{}
CREATE_FUNC(ExpTransfer_CCB);


//Class Loader , modify it when necessary
class ExpTransfer_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(ExpTransfer_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(ExpTransfer_CCB);
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

 //member will assigned form ccbi file
protected:
	cocos2d::CCMenu*		m_buttons;
	cocos2d::CCLabelTTF*		m_cardName0;
	cocos2d::CCSprite*		m_cardimage0;
	cocos2d::CCLabelTTF*		m_positionText0;
	cocos2d::CCLabelTTF*		m_cardName1;
	cocos2d::CCSprite*		m_cardImage1;
	cocos2d::CCLabelTTF*		m_positionText1;
	cocos2d::CCSprite*		m_starIcon0;
	cocos2d::CCLabelTTF*		m_levelText0;
	cocos2d::CCLabelTTF*		m_levelText1;
	cocos2d::CCSprite*		m_starIcon1;
	cocos2d::CCLayer*		m_itemScrollArea;
	cocos2d::CCLayer*		m_cardScrollArea;

 //member visit function
public:
	inline cocos2d::CCMenu*&		buttons(){ return m_buttons; }
	inline cocos2d::CCLabelTTF*&		cardName0(){ return m_cardName0; }
	inline cocos2d::CCSprite*&		cardimage0(){ return m_cardimage0; }
	inline cocos2d::CCLabelTTF*&		positionText0(){ return m_positionText0; }
	inline cocos2d::CCLabelTTF*&		cardName1(){ return m_cardName1; }
	inline cocos2d::CCSprite*&		cardImage1(){ return m_cardImage1; }
	inline cocos2d::CCLabelTTF*&		positionText1(){ return m_positionText1; }
	inline cocos2d::CCSprite*&		starIcon0(){ return m_starIcon0; }
	inline cocos2d::CCLabelTTF*&		levelText0(){ return m_levelText0; }
	inline cocos2d::CCLabelTTF*&		levelText1(){ return m_levelText1; }
	inline cocos2d::CCSprite*&		starIcon1(){ return m_starIcon1; }
	inline cocos2d::CCLayer*&		itemScrollArea(){ return m_itemScrollArea; }
	inline cocos2d::CCLayer*&		cardScrollArea(){ return m_cardScrollArea; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(ExpTransfer*, m_expTransfer, ExpTransfer);
};
#endif
