//
//  GameLogoUILayer.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//


#include "GameLogoUILayer.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void GameLogoUILayer::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}




//control button call back  here ;
// end control call back

// menu call back   here ;
void GameLogoUILayer::clickButton_one(cocos2d::CCObject * pSender)
{


}

void GameLogoUILayer::clickButton_two(cocos2d::CCObject * pSender)
{


}

// end menu call back

// glue menu callback here ;
SEL_MenuHandler GameLogoUILayer::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_one",GameLogoUILayer::clickButton_one);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_two",GameLogoUILayer::clickButton_two);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler GameLogoUILayer::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool GameLogoUILayer::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelText",CCLabelTTF*,this->m_labelText);
	return false;
}
// glue custom member here ;
bool GameLogoUILayer::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
		if (0 == strcmp(pMemberVariableName, "m_iValue")){
			m_iValue = pCCBValue->getIntValue();
			return true;
		}
		if (0 == strcmp(pMemberVariableName, "m_strValue")){
			m_strValue = pCCBValue->getStringValue();
			return true;
		}
	}
	return false;
}

