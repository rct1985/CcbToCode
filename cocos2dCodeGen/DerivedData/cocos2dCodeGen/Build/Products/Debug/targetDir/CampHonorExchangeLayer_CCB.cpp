//
//  CampHonorExchangeLayer_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "CampHonorExchangeLayer_CCB.h"
#include "CampHonorExchangeLayer.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void CampHonorExchangeLayer_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void CampHonorExchangeLayer_CCB::clickButton_exit(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_campHonorExchangeLayer->clickButton_exit(pSender);
}
void CampHonorExchangeLayer_CCB::clickButton_randomExchange(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_campHonorExchangeLayer->clickButton_randomExchange(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler CampHonorExchangeLayer_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_exit",CampHonorExchangeLayer_CCB::clickButton_exit);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_randomExchange",CampHonorExchangeLayer_CCB::clickButton_randomExchange);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler CampHonorExchangeLayer_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool CampHonorExchangeLayer_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelCurHonor",CCLabelTTF*,this->m_labelCurHonor);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelMaxHonor",CCLabelTTF*,this->m_labelMaxHonor);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menu",CCMenu*,this->m_menu);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItem_exit",CCMenuItemImage*,this->m_menuItem_exit);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItem_randomExchange",CCMenuItemImage*,this->m_menuItem_randomExchange);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_layerForScrollView",CCLayerColor*,this->m_layerForScrollView);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelHonorCost_random",CCLabelTTF*,this->m_labelHonorCost_random);
	return false;
}
// glue custom member here ;
bool CampHonorExchangeLayer_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

