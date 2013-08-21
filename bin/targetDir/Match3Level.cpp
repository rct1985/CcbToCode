//
//  Match3Level.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//


#include "Match3Level.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void Match3Level::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}




//control button call back  here ;
void Match3Level::OnBackPressed(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{


}

void Match3Level::OnCMDPressed(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{


}

// end control call back

// menu call back   here ;
// end menu call back

// glue menu callback here ;
SEL_MenuHandler Match3Level::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler Match3Level::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this,"OnBackPressed",Match3Level::OnBackPressed);
	CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this,"OnCMDPressed",Match3Level::OnCMDPressed);
	return false;
}

// glue assigned member here ;
bool Match3Level::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"mScoreLabel",CCLabelTTF*,this->mScoreLabel);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"mBoard",Board*,this->mBoard);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_CMDButton",CCControlButton*,this->m_CMDButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_plant",CCBFile*,this->m_plant);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_bug",CCBFile*,this->m_bug);
	return false;
}
// glue custom member here ;
bool Match3Level::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
		if (0 == strcmp(pMemberVariableName, "swapback")){
			swapback = pCCBValue->getBoolValue();
			return true;
		}
		if (0 == strcmp(pMemberVariableName, "fallingCheckCD")){
			fallingCheckCD = pCCBValue->getFloatValue();
			return true;
		}
		if (0 == strcmp(pMemberVariableName, "preFallingCheckCD")){
			preFallingCheckCD = pCCBValue->getFloatValue();
			return true;
		}
		if (0 == strcmp(pMemberVariableName, "preFallingCheck")){
			preFallingCheck = pCCBValue->getBoolValue();
			return true;
		}
		if (0 == strcmp(pMemberVariableName, "resetComboAfterFallingCheck")){
			resetComboAfterFallingCheck = pCCBValue->getBoolValue();
			return true;
		}
		if (0 == strcmp(pMemberVariableName, "fallingSpeed")){
			fallingSpeed = pCCBValue->getFloatValue();
			return true;
		}
		if (0 == strcmp(pMemberVariableName, "disappearingTime")){
			disappearingTime = pCCBValue->getFloatValue();
			return true;
		}
		if (0 == strcmp(pMemberVariableName, "swapTime")){
			swapTime = pCCBValue->getFloatValue();
			return true;
		}
		if (0 == strcmp(pMemberVariableName, "allowDiagonalSwap")){
			allowDiagonalSwap = pCCBValue->getBoolValue();
			return true;
		}
		if (0 == strcmp(pMemberVariableName, "fallingWithSpawn")){
			fallingWithSpawn = pCCBValue->getBoolValue();
			return true;
		}
		if (0 == strcmp(pMemberVariableName, "gridSizeWidth")){
			gridSizeWidth = pCCBValue->getIntValue();
			return true;
		}
		if (0 == strcmp(pMemberVariableName, "gridSizeHeight")){
			gridSizeHeight = pCCBValue->getIntValue();
			return true;
		}
		if (0 == strcmp(pMemberVariableName, "gridSpaceWidth")){
			gridSpaceWidth = pCCBValue->getIntValue();
			return true;
		}
		if (0 == strcmp(pMemberVariableName, "gridSpaceHeight")){
			gridSpaceHeight = pCCBValue->getIntValue();
			return true;
		}
		if (0 == strcmp(pMemberVariableName, "row")){
			row = pCCBValue->getIntValue();
			return true;
		}
		if (0 == strcmp(pMemberVariableName, "col")){
			col = pCCBValue->getIntValue();
			return true;
		}
	}
	return false;
}

