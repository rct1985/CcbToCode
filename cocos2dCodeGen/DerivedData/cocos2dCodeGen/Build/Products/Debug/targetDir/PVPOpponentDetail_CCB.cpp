//
//  PVPOpponentDetail_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "PVPOpponentDetail_CCB.h"
#include "PVPOpponentDetail.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void PVPOpponentDetail_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void PVPOpponentDetail_CCB::clickButton_exit(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_pVPOpponentDetail->clickButton_exit(pSender);
}
void PVPOpponentDetail_CCB::clickButton_challage(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_pVPOpponentDetail->clickButton_challage(pSender);
}
void PVPOpponentDetail_CCB::clickButton_showDetail(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_pVPOpponentDetail->clickButton_showDetail(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler PVPOpponentDetail_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_exit",PVPOpponentDetail_CCB::clickButton_exit);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_challage",PVPOpponentDetail_CCB::clickButton_challage);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_showDetail",PVPOpponentDetail_CCB::clickButton_showDetail);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler PVPOpponentDetail_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool PVPOpponentDetail_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelName",CCLabelTTF*,this->m_labelName);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menu",CCMenu*,this->m_menu);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItem_exit",CCMenuItemImage*,this->m_menuItem_exit);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItemChallenge",CCMenuItemImage*,this->m_menuItemChallenge);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItem_showDetail",CCMenuItemImage*,this->m_menuItem_showDetail);
	return false;
}
// glue custom member here ;
bool PVPOpponentDetail_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

