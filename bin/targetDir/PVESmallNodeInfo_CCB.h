//
//  PVESmallNodeInfo_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__PVESmallNodeInfo_CCB__
#define __autogen_ccbuilder__PVESmallNodeInfo_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class PVESmallNodeInfo;

class PVESmallNodeInfo_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    PVESmallNodeInfo_CCB()
    :CCLayer()

	,m_labelBigNodeName(0)
	,m_labelRecommandLevel(0)
	,m_labelEnergyLeft(0)
	,m_labelSmallNodeDes(0)
	,m_labelPrize_gameCoin(0)
	,m_labelPrize_exp(0)
	,m_spritePrizeItem_one(0)
	,m_spritePrizeItem_another(0)
{}
CREATE_FUNC(PVESmallNodeInfo_CCB);


//Class Loader , modify it when necessary
class PVESmallNodeInfo_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(PVESmallNodeInfo_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(PVESmallNodeInfo_CCB);
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
	cocos2d::CCLabelTTF*		m_labelBigNodeName;
	cocos2d::CCLabelTTF*		m_labelRecommandLevel;
	cocos2d::CCLabelTTF*		m_labelEnergyLeft;
	cocos2d::CCLabelTTF*		m_labelSmallNodeDes;
	cocos2d::CCLabelTTF*		m_labelPrize_gameCoin;
	cocos2d::CCLabelTTF*		m_labelPrize_exp;
	cocos2d::CCSprite*		m_spritePrizeItem_one;
	cocos2d::CCSprite*		m_spritePrizeItem_another;

 //member visit function
public:
	inline cocos2d::CCLabelTTF*&		labelBigNodeName(){ return m_labelBigNodeName; }
	inline cocos2d::CCLabelTTF*&		labelRecommandLevel(){ return m_labelRecommandLevel; }
	inline cocos2d::CCLabelTTF*&		labelEnergyLeft(){ return m_labelEnergyLeft; }
	inline cocos2d::CCLabelTTF*&		labelSmallNodeDes(){ return m_labelSmallNodeDes; }
	inline cocos2d::CCLabelTTF*&		labelPrize_gameCoin(){ return m_labelPrize_gameCoin; }
	inline cocos2d::CCLabelTTF*&		labelPrize_exp(){ return m_labelPrize_exp; }
	inline cocos2d::CCSprite*&		spritePrizeItem_one(){ return m_spritePrizeItem_one; }
	inline cocos2d::CCSprite*&		spritePrizeItem_another(){ return m_spritePrizeItem_another; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(PVESmallNodeInfo*, m_pVESmallNodeInfo, PVESmallNodeInfo);
};
#endif
