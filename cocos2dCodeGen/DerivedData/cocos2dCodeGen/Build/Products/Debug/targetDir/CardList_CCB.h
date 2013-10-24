//
//  CardList_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__CardList_CCB__
#define __autogen_ccbuilder__CardList_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class CardList;

class CardList_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    CardList_CCB()
    :CCLayer()

	,m_scrollArea(0)
{}
CREATE_FUNC(CardList_CCB);


//Class Loader , modify it when necessary
class CardList_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(CardList_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(CardList_CCB);
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

 //member will assigned form ccbi file
protected:
	cocos2d::CCLayer*		m_scrollArea;

 //member visit function
public:
	inline cocos2d::CCLayer*&		scrollArea(){ return m_scrollArea; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(CardList*, m_cardList, CardList);
};
#endif
