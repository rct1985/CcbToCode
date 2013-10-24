//
//  ExpTransResult_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__ExpTransResult_CCB__
#define __autogen_ccbuilder__ExpTransResult_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class ExpTransResult;

class ExpTransResult_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    ExpTransResult_CCB()
    :CCLayer()

	,m_image(0)
	,m_exp(0)
	,m_level(0)
{}
CREATE_FUNC(ExpTransResult_CCB);


//Class Loader , modify it when necessary
class ExpTransResult_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(ExpTransResult_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(ExpTransResult_CCB);
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
	void selector_confirm(cocos2d::CCObject * pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::CCSprite*		m_image;
	cocos2d::CCLabelTTF*		m_exp;
	cocos2d::CCLabelTTF*		m_level;

 //member visit function
public:
	inline cocos2d::CCSprite*&		image(){ return m_image; }
	inline cocos2d::CCLabelTTF*&		exp(){ return m_exp; }
	inline cocos2d::CCLabelTTF*&		level(){ return m_level; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(ExpTransResult*, m_expTransResult, ExpTransResult);
};
#endif
