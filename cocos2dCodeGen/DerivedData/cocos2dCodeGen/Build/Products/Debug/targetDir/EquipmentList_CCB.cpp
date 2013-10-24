//
//  EquipmentList_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "EquipmentList_CCB.h"
#include "EquipmentList.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void EquipmentList_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void EquipmentList_CCB::selector_noneFilter(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_equipmentList->selector_noneFilter(pSender);
}
void EquipmentList_CCB::selector_weaponFilter(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_equipmentList->selector_weaponFilter(pSender);
}
void EquipmentList_CCB::selector_armorFilter(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_equipmentList->selector_armorFilter(pSender);
}
void EquipmentList_CCB::selector_magicWeaponFilter(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_equipmentList->selector_magicWeaponFilter(pSender);
}
void EquipmentList_CCB::selector_necklaceFilter(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_equipmentList->selector_necklaceFilter(pSender);
}
void EquipmentList_CCB::selector_ringFilter(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_equipmentList->selector_ringFilter(pSender);
}
void EquipmentList_CCB::selector_back(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_equipmentList->selector_back(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler EquipmentList_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_noneFilter",EquipmentList_CCB::selector_noneFilter);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_weaponFilter",EquipmentList_CCB::selector_weaponFilter);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_armorFilter",EquipmentList_CCB::selector_armorFilter);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_magicWeaponFilter",EquipmentList_CCB::selector_magicWeaponFilter);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_necklaceFilter",EquipmentList_CCB::selector_necklaceFilter);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_ringFilter",EquipmentList_CCB::selector_ringFilter);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_back",EquipmentList_CCB::selector_back);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler EquipmentList_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool EquipmentList_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_gameMenu",CCMenu*,this->m_gameMenu);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_allButton",CCMenuItemImage*,this->m_allButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_weaponButton",CCMenuItemImage*,this->m_weaponButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_armorButton",CCMenuItemImage*,this->m_armorButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_magicWeaponButton",CCMenuItemImage*,this->m_magicWeaponButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_necklaceButton",CCMenuItemImage*,this->m_necklaceButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_ringButton",CCMenuItemImage*,this->m_ringButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_scrollArea",CCLayer*,this->m_scrollArea);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_backButton",CCMenuItemImage*,this->m_backButton);
	return false;
}
// glue custom member here ;
bool EquipmentList_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

