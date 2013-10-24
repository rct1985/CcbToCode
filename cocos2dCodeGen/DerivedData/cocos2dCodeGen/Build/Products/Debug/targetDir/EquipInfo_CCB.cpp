//
//  EquipInfo_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "EquipInfo_CCB.h"
#include "EquipInfo.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void EquipInfo_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void EquipInfo_CCB::selector_back(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_equipInfo->selector_back(pSender);
}
void EquipInfo_CCB::selector_sell(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_equipInfo->selector_sell(pSender);
}
void EquipInfo_CCB::selector_upgrade(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_equipInfo->selector_upgrade(pSender);
}
void EquipInfo_CCB::selector_equip(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_equipInfo->selector_equip(pSender);
}
void EquipInfo_CCB::selector_sellConfirm(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_equipInfo->selector_sellConfirm(pSender);
}
void EquipInfo_CCB::selector_sellCancel(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_equipInfo->selector_sellCancel(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler EquipInfo_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_back",EquipInfo_CCB::selector_back);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_sell",EquipInfo_CCB::selector_sell);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_upgrade",EquipInfo_CCB::selector_upgrade);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_equip",EquipInfo_CCB::selector_equip);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_sellConfirm",EquipInfo_CCB::selector_sellConfirm);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_sellCancel",EquipInfo_CCB::selector_sellCancel);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler EquipInfo_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool EquipInfo_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_rootLayer",CCLayerColor*,this->m_rootLayer);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_buttons",CCMenu*,this->m_buttons);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_backButton",CCMenuItemImage*,this->m_backButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_sellButton",CCMenuItemImage*,this->m_sellButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_upgradeButton",CCMenuItemImage*,this->m_upgradeButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_equipButton",CCMenuItemImage*,this->m_equipButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_name",CCLabelTTF*,this->m_name);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_icon",CCSprite*,this->m_icon);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_type",CCLabelTTF*,this->m_type);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_star",CCSprite*,this->m_star);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_level",CCLabelTTF*,this->m_level);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_property_0",CCLabelTTF*,this->m_property_0);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_property_1",CCLabelTTF*,this->m_property_1);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_property_2",CCLabelTTF*,this->m_property_2);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_discription",CCLabelTTF*,this->m_discription);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_sellConfirmLayer",CCLayerColor*,this->m_sellConfirmLayer);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_sellWarningText",CCLabelTTF*,this->m_sellWarningText);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_sellLayerButtons",CCMenu*,this->m_sellLayerButtons);
	return false;
}
// glue custom member here ;
bool EquipInfo_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

