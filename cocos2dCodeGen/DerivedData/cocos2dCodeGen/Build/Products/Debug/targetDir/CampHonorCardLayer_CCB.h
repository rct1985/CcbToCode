//
//  CampHonorCardLayer_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__CampHonorCardLayer_CCB__
#define __autogen_ccbuilder__CampHonorCardLayer_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class CampHonorCardLayer;

class CampHonorCardLayer_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    CampHonorCardLayer_CCB()
    :CCLayer()

	,m_layerBg(0)
	,m_spriteIcon(0)
	,m_labelName(0)
	,m_labelTip_num(0)
	,m_labelNum(0)
	,m_labelTip_honor(0)
	,m_labelHonor(0)
	,m_labelDes(0)
	,m_menu(0)
	,m_menuItem_exchange(0)
{}
CREATE_FUNC(CampHonorCardLayer_CCB);


//Class Loader , modify it when necessary
class CampHonorCardLayer_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(CampHonorCardLayer_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(CampHonorCardLayer_CCB);
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
	void clickButton_exchange(cocos2d::CCObject * pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::CCLayerColor*		m_layerBg;
	cocos2d::CCSprite*		m_spriteIcon;
	cocos2d::CCLabelTTF*		m_labelName;
	cocos2d::CCLabelTTF*		m_labelTip_num;
	cocos2d::CCLabelTTF*		m_labelNum;
	cocos2d::CCLabelTTF*		m_labelTip_honor;
	cocos2d::CCLabelTTF*		m_labelHonor;
	cocos2d::CCLabelTTF*		m_labelDes;
	cocos2d::CCMenu*		m_menu;
	cocos2d::CCMenuItemImage*		m_menuItem_exchange;

 //member visit function
public:
	inline cocos2d::CCLayerColor*&		layerBg(){ return m_layerBg; }
	inline cocos2d::CCSprite*&		spriteIcon(){ return m_spriteIcon; }
	inline cocos2d::CCLabelTTF*&		labelName(){ return m_labelName; }
	inline cocos2d::CCLabelTTF*&		labelTip_num(){ return m_labelTip_num; }
	inline cocos2d::CCLabelTTF*&		labelNum(){ return m_labelNum; }
	inline cocos2d::CCLabelTTF*&		labelTip_honor(){ return m_labelTip_honor; }
	inline cocos2d::CCLabelTTF*&		labelHonor(){ return m_labelHonor; }
	inline cocos2d::CCLabelTTF*&		labelDes(){ return m_labelDes; }
	inline cocos2d::CCMenu*&		menu(){ return m_menu; }
	inline cocos2d::CCMenuItemImage*&		menuItem_exchange(){ return m_menuItem_exchange; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(CampHonorCardLayer*, m_campHonorCardLayer, CampHonorCardLayer);
};
#endif
