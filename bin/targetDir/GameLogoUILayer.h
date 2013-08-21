//
//  GameLogoUILayer.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__GameLogoUILayer__
#define __autogen_ccbuilder__GameLogoUILayer__

#include "cocos2d.h"
#include "cocos-ext.h"


class GameLogoUILayer
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    GameLogoUILayer()
    :CCLayer()
	,m_labelText(0)
	,m_iValue(0)
{}
CREATE_FUNC(GameLogoUILayer);


//Class Loader , modify it when necessary
class GameLogoUILayerLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(GameLogoUILayerLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(GameLogoUILayer);
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
	void clickButton_one(cocos2d::CCObject * pSender);
	void clickButton_two(cocos2d::CCObject * pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::CCLabelTTF*		m_labelText;

 //member visit function
public:
	inline cocos2d::CCLabelTTF*&		labelText(){ return m_labelText; }

 //custom member list 
protected:
	int		m_iValue;
	std::string		m_strValue;
};
#endif
