//
//  SkillUpgrade_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "SkillUpgrade_CCB.h"
#include "SkillUpgrade.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void SkillUpgrade_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void SkillUpgrade_CCB::selector_back(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_skillUpgrade->selector_back(pSender);
}
void SkillUpgrade_CCB::selector_transfer(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_skillUpgrade->selector_transfer(pSender);
}
void SkillUpgrade_CCB::selector_select_item(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_skillUpgrade->selector_select_item(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler SkillUpgrade_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_back",SkillUpgrade_CCB::selector_back);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_transfer",SkillUpgrade_CCB::selector_transfer);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_select_item",SkillUpgrade_CCB::selector_select_item);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler SkillUpgrade_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool SkillUpgrade_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_buttons",CCMenu*,this->m_buttons);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_card0",CCSprite*,this->m_card0);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_skillIcon0",CCSprite*,this->m_skillIcon0);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_skillName0",CCLabelTTF*,this->m_skillName0);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_card1",CCSprite*,this->m_card1);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_levelText0",CCLabelTTF*,this->m_levelText0);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_skillIcon1",CCSprite*,this->m_skillIcon1);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_skillName1",CCLabelTTF*,this->m_skillName1);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_levelText1",CCLabelTTF*,this->m_levelText1);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_cardScrollArea",CCLayer*,this->m_cardScrollArea);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_pecentage",CCLabelTTF*,this->m_pecentage);
	return false;
}
// glue custom member here ;
bool SkillUpgrade_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

