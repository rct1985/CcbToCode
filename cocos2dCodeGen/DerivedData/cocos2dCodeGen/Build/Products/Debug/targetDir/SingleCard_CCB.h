//
//  SingleCard_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__SingleCard_CCB__
#define __autogen_ccbuilder__SingleCard_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class SingleCard;

class SingleCard_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    SingleCard_CCB()
    :CCLayer()

	,m_image(0)
	,m_power(0)
	,m_viewButton(0)
	,m_switchButton(0)
	,m_skills(0)
{}
CREATE_FUNC(SingleCard_CCB);


//Class Loader , modify it when necessary
class SingleCard_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(SingleCard_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(SingleCard_CCB);
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
	void selector_view(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);
	void selector_switch(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);

 // menu call back fuction 
protected:

 //member will assigned form ccbi file
protected:
	cocos2d::CCSprite*		m_image;
	cocos2d::CCLabelTTF*		m_power;
	cocos2d::extension::CCControlButton*		m_viewButton;
	cocos2d::extension::CCControlButton*		m_switchButton;
	cocos2d::CCLayer*		m_skills;

 //member visit function
public:
	inline cocos2d::CCSprite*&		image(){ return m_image; }
	inline cocos2d::CCLabelTTF*&		power(){ return m_power; }
	inline cocos2d::extension::CCControlButton*&		viewButton(){ return m_viewButton; }
	inline cocos2d::extension::CCControlButton*&		switchButton(){ return m_switchButton; }
	inline cocos2d::CCLayer*&		skills(){ return m_skills; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(SingleCard*, m_singleCard, SingleCard);
};
#endif
