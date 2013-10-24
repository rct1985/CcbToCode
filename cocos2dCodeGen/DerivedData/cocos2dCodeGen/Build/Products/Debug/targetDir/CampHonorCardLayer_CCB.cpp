//
//  CampHonorCardLayer_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "CampHonorCardLayer_CCB.h"
#include "CampHonorCardLayer.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void CampHonorCardLayer_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void CampHonorCardLayer_CCB::clickButton_exchange(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_campHonorCardLayer->clickButton_exchange(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler CampHonorCardLayer_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_exchange",CampHonorCardLayer_CCB::clickButton_exchange);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler CampHonorCardLayer_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool CampHonorCardLayer_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_layerBg",CCLayerColor*,this->m_layerBg);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteIcon",CCSprite*,this->m_spriteIcon);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelName",CCLabelTTF*,this->m_labelName);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelTip_num",CCLabelTTF*,this->m_labelTip_num);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelNum",CCLabelTTF*,this->m_labelNum);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelTip_honor",CCLabelTTF*,this->m_labelTip_honor);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelHonor",CCLabelTTF*,this->m_labelHonor);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelDes",CCLabelTTF*,this->m_labelDes);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menu",CCMenu*,this->m_menu);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItem_exchange",CCMenuItemImage*,this->m_menuItem_exchange);
	return false;
}
// glue custom member here ;
bool CampHonorCardLayer_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

