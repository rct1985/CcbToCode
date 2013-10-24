//
//  FollowerProperty_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "FollowerProperty_CCB.h"
#include "FollowerProperty.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void FollowerProperty_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void FollowerProperty_CCB::selector_back(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_followerProperty->selector_back(pSender);
}
void FollowerProperty_CCB::selector_cardToFight(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_followerProperty->selector_cardToFight(pSender);
}
void FollowerProperty_CCB::selector_equip(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_followerProperty->selector_equip(pSender);
}
void FollowerProperty_CCB::selector_skill(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_followerProperty->selector_skill(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler FollowerProperty_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_back",FollowerProperty_CCB::selector_back);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_cardToFight",FollowerProperty_CCB::selector_cardToFight);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_equip",FollowerProperty_CCB::selector_equip);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_skill",FollowerProperty_CCB::selector_skill);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler FollowerProperty_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool FollowerProperty_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_name",CCLabelTTF*,this->m_name);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_faction",CCLabelTTF*,this->m_faction);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_level",CCLabelTTF*,this->m_level);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_power",CCLabelTTF*,this->m_power);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_btnCardToFight",CCMenuItemImage*,this->m_btnCardToFight);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_equiptMenu",CCMenu*,this->m_equiptMenu);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_weaponButton",CCMenuItemImage*,this->m_weaponButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_armorButton",CCMenuItemImage*,this->m_armorButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_trumpButton",CCMenuItemImage*,this->m_trumpButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_necklaceButton",CCMenuItemImage*,this->m_necklaceButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_ringButton",CCMenuItemImage*,this->m_ringButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_health",CCLabelTTF*,this->m_health);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_speed",CCLabelTTF*,this->m_speed);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_attack",CCLabelTTF*,this->m_attack);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_magicAttack",CCLabelTTF*,this->m_magicAttack);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_defence",CCLabelTTF*,this->m_defence);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_magicDefence",CCLabelTTF*,this->m_magicDefence);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_cardLayer",CCLayer*,this->m_cardLayer);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_skills",CCMenu*,this->m_skills);
	return false;
}
// glue custom member here ;
bool FollowerProperty_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

