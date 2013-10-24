//
//  SkillUpgradeItem_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "SkillUpgradeItem_CCB.h"
#include "SkillUpgradeItem.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void SkillUpgradeItem_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void SkillUpgradeItem_CCB::selector_select(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_skillUpgradeItem->selector_select(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler SkillUpgradeItem_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_select",SkillUpgradeItem_CCB::selector_select);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler SkillUpgradeItem_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool SkillUpgradeItem_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_buttonSelect",CCMenuItemImage*,this->m_buttonSelect);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_headIcon",CCSprite*,this->m_headIcon);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_name",CCLabelTTF*,this->m_name);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_level",CCLabelTTF*,this->m_level);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_selectedMark",CCSprite*,this->m_selectedMark);
	return false;
}
// glue custom member here ;
bool SkillUpgradeItem_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

