//
//  Match3Level.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__Match3Level__
#define __autogen_ccbuilder__Match3Level__

#include "cocos2d.h"
#include "cocos-ext.h"


class Match3Level
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    Match3Level()
    :CCLayer()
	,mScoreLabel(0)
	,mBoard(0)
	,m_CMDButton(0)
	,m_plant(0)
	,m_bug(0)
	,swapback(0)
	,fallingCheckCD(0)
	,preFallingCheckCD(0)
	,preFallingCheck(0)
	,resetComboAfterFallingCheck(0)
	,fallingSpeed(0)
	,disappearingTime(0)
	,swapTime(0)
	,allowDiagonalSwap(0)
	,fallingWithSpawn(0)
	,gridSizeWidth(0)
	,gridSizeHeight(0)
	,gridSpaceWidth(0)
	,gridSpaceHeight(0)
	,row(0)
	,col(0)
{}
CREATE_FUNC(Match3Level);


//Class Loader , modify it when necessary
class Match3LevelLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(Match3LevelLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(Match3Level);
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
	void OnBackPressed(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);
	void OnCMDPressed(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);

 // menu call back fuction 
protected:

 //member will assigned form ccbi file
protected:
	cocos2d::CCLabelTTF*		mScoreLabel;
	Board*		mBoard;
	cocos2d::extension::CCControlButton*		m_CMDButton;
	cocos2d::extension::CCBFile*		m_plant;
	cocos2d::extension::CCBFile*		m_bug;

 //member visit function
public:
	inline cocos2d::CCLabelTTF*&		mScoreLabel(){ return mScoreLabel; }
	inline Board*&		mBoard(){ return mBoard; }
	inline cocos2d::extension::CCControlButton*&		CMDButton(){ return m_CMDButton; }
	inline cocos2d::extension::CCBFile*&		plant(){ return m_plant; }
	inline cocos2d::extension::CCBFile*&		bug(){ return m_bug; }

 //custom member list 
protected:
	bool		swapback;
	float		fallingCheckCD;
	float		preFallingCheckCD;
	bool		preFallingCheck;
	bool		resetComboAfterFallingCheck;
	float		fallingSpeed;
	float		disappearingTime;
	float		swapTime;
	bool		allowDiagonalSwap;
	bool		fallingWithSpawn;
	int		gridSizeWidth;
	int		gridSizeHeight;
	int		gridSpaceWidth;
	int		gridSpaceHeight;
	int		row;
	int		col;
};
#endif
