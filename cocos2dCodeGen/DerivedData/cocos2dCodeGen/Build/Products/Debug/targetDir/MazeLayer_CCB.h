//
//  MazeLayer_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__MazeLayer_CCB__
#define __autogen_ccbuilder__MazeLayer_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class MazeLayer;

class MazeLayer_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    MazeLayer_CCB()
    :CCLayer()

	,m_labelChallengePoint(0)
	,m_labelMazeName(0)
	,m_spriteReward_0(0)
	,m_spriteReward_1(0)
	,m_labelItemName_0(0)
	,m_labelItemName_1(0)
	,m_menu(0)
	,m_menuItem_exit(0)
	,m_menuItem_reset(0)
	,m_menuItem_explore(0)
	,m_menuItem_help(0)
	,m_labelProgress(0)
	,m_layerForInstruction(0)
	,m_labelInstructionTitle(0)
	,m_labelInstructionContent(0)
	,m_menuForInstruction(0)
	,m_menuItemForInstruction_exit(0)
{}
CREATE_FUNC(MazeLayer_CCB);


//Class Loader , modify it when necessary
class MazeLayer_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(MazeLayer_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(MazeLayer_CCB);
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
	void clickButton_exit(cocos2d::CCObject * pSender);
	void clickButton_reset(cocos2d::CCObject * pSender);
	void clickButton_explore(cocos2d::CCObject * pSender);
	void clickButton_help(cocos2d::CCObject * pSender);
	void clickButtonForInstruction_exit(cocos2d::CCObject * pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::CCLabelTTF*		m_labelChallengePoint;
	cocos2d::CCLabelTTF*		m_labelMazeName;
	cocos2d::CCSprite*		m_spriteReward_0;
	cocos2d::CCSprite*		m_spriteReward_1;
	cocos2d::CCLabelTTF*		m_labelItemName_0;
	cocos2d::CCLabelTTF*		m_labelItemName_1;
	cocos2d::CCMenu*		m_menu;
	cocos2d::CCMenuItemImage*		m_menuItem_exit;
	cocos2d::CCMenuItemImage*		m_menuItem_reset;
	cocos2d::CCMenuItemImage*		m_menuItem_explore;
	cocos2d::CCMenuItemImage*		m_menuItem_help;
	cocos2d::CCLabelTTF*		m_labelProgress;
	cocos2d::CCLayerColor*		m_layerForInstruction;
	cocos2d::CCLabelTTF*		m_labelInstructionTitle;
	cocos2d::CCLabelTTF*		m_labelInstructionContent;
	cocos2d::CCMenu*		m_menuForInstruction;
	cocos2d::CCMenuItemImage*		m_menuItemForInstruction_exit;

 //member visit function
public:
	inline cocos2d::CCLabelTTF*&		labelChallengePoint(){ return m_labelChallengePoint; }
	inline cocos2d::CCLabelTTF*&		labelMazeName(){ return m_labelMazeName; }
	inline cocos2d::CCSprite*&		spriteReward_0(){ return m_spriteReward_0; }
	inline cocos2d::CCSprite*&		spriteReward_1(){ return m_spriteReward_1; }
	inline cocos2d::CCLabelTTF*&		labelItemName_0(){ return m_labelItemName_0; }
	inline cocos2d::CCLabelTTF*&		labelItemName_1(){ return m_labelItemName_1; }
	inline cocos2d::CCMenu*&		menu(){ return m_menu; }
	inline cocos2d::CCMenuItemImage*&		menuItem_exit(){ return m_menuItem_exit; }
	inline cocos2d::CCMenuItemImage*&		menuItem_reset(){ return m_menuItem_reset; }
	inline cocos2d::CCMenuItemImage*&		menuItem_explore(){ return m_menuItem_explore; }
	inline cocos2d::CCMenuItemImage*&		menuItem_help(){ return m_menuItem_help; }
	inline cocos2d::CCLabelTTF*&		labelProgress(){ return m_labelProgress; }
	inline cocos2d::CCLayerColor*&		layerForInstruction(){ return m_layerForInstruction; }
	inline cocos2d::CCLabelTTF*&		labelInstructionTitle(){ return m_labelInstructionTitle; }
	inline cocos2d::CCLabelTTF*&		labelInstructionContent(){ return m_labelInstructionContent; }
	inline cocos2d::CCMenu*&		menuForInstruction(){ return m_menuForInstruction; }
	inline cocos2d::CCMenuItemImage*&		menuItemForInstruction_exit(){ return m_menuItemForInstruction_exit; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(MazeLayer*, m_mazeLayer, MazeLayer);
};
#endif
