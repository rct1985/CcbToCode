//
//  PVPLayer_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "PVPLayer_CCB.h"
#include "PVPLayer.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void PVPLayer_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void PVPLayer_CCB::clickButton_exit(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_pVPLayer->clickButton_exit(pSender);
}
void PVPLayer_CCB::clickButton_refresh(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_pVPLayer->clickButton_refresh(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler PVPLayer_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_exit",PVPLayer_CCB::clickButton_exit);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_refresh",PVPLayer_CCB::clickButton_refresh);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler PVPLayer_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool PVPLayer_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelOrder",CCLabelTTF*,this->m_labelOrder);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelBelieve",CCLabelTTF*,this->m_labelBelieve);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelWinFactor",CCLabelTTF*,this->m_labelWinFactor);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelName",CCLabelTTF*,this->m_labelName);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labeLevel",CCLabelTTF*,this->m_labeLevel);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelChallageTimes",CCLabelTTF*,this->m_labelChallageTimes);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menu",CCMenu*,this->m_menu);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItem_exit",CCMenuItemImage*,this->m_menuItem_exit);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItem_confirm",CCMenuItemImage*,this->m_menuItem_confirm);
	return false;
}
// glue custom member here ;
bool PVPLayer_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

