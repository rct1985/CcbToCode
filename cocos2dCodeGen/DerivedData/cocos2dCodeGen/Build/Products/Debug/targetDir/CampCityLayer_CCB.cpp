//
//  CampCityLayer_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "CampCityLayer_CCB.h"
#include "CampCityLayer.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void CampCityLayer_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void CampCityLayer_CCB::clickButton_exit(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_campCityLayer->clickButton_exit(pSender);
}
void CampCityLayer_CCB::clickButton_attack(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_campCityLayer->clickButton_attack(pSender);
}
void CampCityLayer_CCB::clickButton_defence(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_campCityLayer->clickButton_defence(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler CampCityLayer_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_exit",CampCityLayer_CCB::clickButton_exit);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_attack",CampCityLayer_CCB::clickButton_attack);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_defence",CampCityLayer_CCB::clickButton_defence);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler CampCityLayer_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool CampCityLayer_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelCityName",CCLabelTTF*,this->m_labelCityName);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelCampName",CCLabelTTF*,this->m_labelCampName);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelHardiness",CCLabelTTF*,this->m_labelHardiness);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelBuffName",CCLabelTTF*,this->m_labelBuffName);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menu",CCMenu*,this->m_menu);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItem_exit",CCMenuItemImage*,this->m_menuItem_exit);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItem_attack",CCMenuItemImage*,this->m_menuItem_attack);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItem_defence",CCMenuItemImage*,this->m_menuItem_defence);
	return false;
}
// glue custom member here ;
bool CampCityLayer_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

