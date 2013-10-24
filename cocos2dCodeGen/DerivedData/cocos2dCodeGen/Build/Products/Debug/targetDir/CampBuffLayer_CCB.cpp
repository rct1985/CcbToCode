//
//  CampBuffLayer_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "CampBuffLayer_CCB.h"
#include "CampBuffLayer.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void CampBuffLayer_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void CampBuffLayer_CCB::clickButton_exit(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_campBuffLayer->clickButton_exit(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler CampBuffLayer_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_exit",CampBuffLayer_CCB::clickButton_exit);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler CampBuffLayer_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool CampBuffLayer_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menu",CCMenu*,this->m_menu);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItem_exit",CCMenuItemImage*,this->m_menuItem_exit);
	return false;
}
// glue custom member here ;
bool CampBuffLayer_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

