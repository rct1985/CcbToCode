//
//  EquipmentItem_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "EquipmentItem_CCB.h"
#include "EquipmentItem.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void EquipmentItem_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
void EquipmentItem_CCB::selector_upgrade(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//feel free to modify code below
	m_equipmentItem->selector_upgrade(pSender, pCCControlEvent);
}
void EquipmentItem_CCB::selector_equip(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//feel free to modify code below
	m_equipmentItem->selector_equip(pSender, pCCControlEvent);
}
// end control call back

// menu call back   here ;
void EquipmentItem_CCB::selector_iconButton(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_equipmentItem->selector_iconButton(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler EquipmentItem_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_iconButton",EquipmentItem_CCB::selector_iconButton);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler EquipmentItem_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this,"selector_upgrade",EquipmentItem_CCB::selector_upgrade);
	CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this,"selector_equip",EquipmentItem_CCB::selector_equip);
	return false;
}

// glue assigned member here ;
bool EquipmentItem_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_name",CCLabelTTF*,this->m_name);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_level",CCLabelTTF*,this->m_level);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_icon",CCSprite*,this->m_icon);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_iconButton",CCMenu*,this->m_iconButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_type",CCLabelTTF*,this->m_type);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_star",CCLabelTTF*,this->m_star);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_property",CCLabelTTF*,this->m_property);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_owner",CCLabelTTF*,this->m_owner);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_upgradeButton",CCControlButton*,this->m_upgradeButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_equipButton",CCControlButton*,this->m_equipButton);
	return false;
}
// glue custom member here ;
bool EquipmentItem_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

