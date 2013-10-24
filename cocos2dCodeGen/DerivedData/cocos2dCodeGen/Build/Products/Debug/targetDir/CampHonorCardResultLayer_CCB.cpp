//
//  CampHonorCardResultLayer_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "CampHonorCardResultLayer_CCB.h"
#include "CampHonorCardResultLayer.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void CampHonorCardResultLayer_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void CampHonorCardResultLayer_CCB::clickButton_sell(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_campHonorCardResultLayer->clickButton_sell(pSender);
}
void CampHonorCardResultLayer_CCB::clickButton_accept(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_campHonorCardResultLayer->clickButton_accept(pSender);
}
void CampHonorCardResultLayer_CCB::clickButton_exit(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_campHonorCardResultLayer->clickButton_exit(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler CampHonorCardResultLayer_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_sell",CampHonorCardResultLayer_CCB::clickButton_sell);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_accept",CampHonorCardResultLayer_CCB::clickButton_accept);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_exit",CampHonorCardResultLayer_CCB::clickButton_exit);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler CampHonorCardResultLayer_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool CampHonorCardResultLayer_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteCard",CCSprite*,this->m_spriteCard);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menu",CCMenu*,this->m_menu);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItem_sell",CCMenuItemImage*,this->m_menuItem_sell);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItem_accept",CCMenuItemImage*,this->m_menuItem_accept);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItem_exit",CCMenuItemImage*,this->m_menuItem_exit);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelHonorWhenSell",CCLabelTTF*,this->m_labelHonorWhenSell);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelTitle",CCLabelTTF*,this->m_labelTitle);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelName",CCLabelTTF*,this->m_labelName);
	return false;
}
// glue custom member here ;
bool CampHonorCardResultLayer_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

