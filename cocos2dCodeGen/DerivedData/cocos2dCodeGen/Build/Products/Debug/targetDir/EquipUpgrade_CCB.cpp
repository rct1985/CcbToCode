//
//  EquipUpgrade_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "EquipUpgrade_CCB.h"
#include "EquipUpgrade.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void EquipUpgrade_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void EquipUpgrade_CCB::selector_back(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_equipUpgrade->selector_back(pSender);
}
void EquipUpgrade_CCB::selector_upgrade(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_equipUpgrade->selector_upgrade(pSender);
}
void EquipUpgrade_CCB::selector_resultOK(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_equipUpgrade->selector_resultOK(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler EquipUpgrade_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_back",EquipUpgrade_CCB::selector_back);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_upgrade",EquipUpgrade_CCB::selector_upgrade);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_resultOK",EquipUpgrade_CCB::selector_resultOK);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler EquipUpgrade_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool EquipUpgrade_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_rootLayer",CCLayerColor*,this->m_rootLayer);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_buttons",CCMenu*,this->m_buttons);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_backButton",CCMenuItemImage*,this->m_backButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_upgradeButton",CCMenuItemImage*,this->m_upgradeButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_name",CCLabelTTF*,this->m_name);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_icon",CCSprite*,this->m_icon);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_type",CCLabelTTF*,this->m_type);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_star",CCSprite*,this->m_star);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_level",CCLabelTTF*,this->m_level);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_property_0",CCLabelTTF*,this->m_property_0);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_property_1",CCLabelTTF*,this->m_property_1);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_property_2",CCLabelTTF*,this->m_property_2);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_discription",CCLabelTTF*,this->m_discription);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_resultLayer",CCLayerColor*,this->m_resultLayer);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_resultText",CCLabelTTF*,this->m_resultText);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_resultLayerButtons",CCMenu*,this->m_resultLayerButtons);
	return false;
}
// glue custom member here ;
bool EquipUpgrade_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

