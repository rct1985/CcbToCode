//
//  FollowerProperty_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//  for cocos2dx_3_x

#include "FollowerProperty_CCB.h"
#include "FollowerProperty.h"
using namespace cocos2d;
using namespace cocos2d::extension;
using namespace cocosbuilder;

void FollowerProperty_CCB::onNodeLoaded(cocos2d::Node *pNode, cocosbuilder::NodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void FollowerProperty_CCB::selector_back(cocos2d::Ref * pSender)
{
	//feel free to modify code below
	m_followerProperty->selector_back(pSender);
}
void FollowerProperty_CCB::selector_weapon(cocos2d::Ref * pSender)
{
	//feel free to modify code below
	m_followerProperty->selector_weapon(pSender);
}
void FollowerProperty_CCB::selector_armor(cocos2d::Ref * pSender)
{
	//feel free to modify code below
	m_followerProperty->selector_armor(pSender);
}
void FollowerProperty_CCB::selector_trump(cocos2d::Ref * pSender)
{
	//feel free to modify code below
	m_followerProperty->selector_trump(pSender);
}
void FollowerProperty_CCB::selector_necklace(cocos2d::Ref * pSender)
{
	//feel free to modify code below
	m_followerProperty->selector_necklace(pSender);
}
void FollowerProperty_CCB::selector_ring(cocos2d::Ref * pSender)
{
	//feel free to modify code below
	m_followerProperty->selector_ring(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler FollowerProperty_CCB::onResolveCCBCCMenuItemSelector(cocos2d::Ref* pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_back",FollowerProperty_CCB::selector_back);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_weapon",FollowerProperty_CCB::selector_weapon);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_armor",FollowerProperty_CCB::selector_armor);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_trump",FollowerProperty_CCB::selector_trump);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_necklace",FollowerProperty_CCB::selector_necklace);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_ring",FollowerProperty_CCB::selector_ring);
	return NULL;
}

// glue control button call back  here ;
cocos2d::extension::Control::Handler FollowerProperty_CCB::onResolveCCBCCControlSelector(cocos2d::Ref* pTarget, const char *pSelectorName)
{
	return NULL;
}

// glue assigned member here ;
bool FollowerProperty_CCB::onAssignCCBMemberVariable(cocos2d::Ref* pTarget, const char *pMemberVariableName, cocos2d::Node *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_name",Label*,this->m_name);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_faction",Label*,this->m_faction);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_level",Label*,this->m_level);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_power",Label*,this->m_power);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_equiptMenu",Menu*,this->m_equiptMenu);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_weaponButton",MenuItemImage*,this->m_weaponButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_armorButton",MenuItemImage*,this->m_armorButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_trumpButton",MenuItemImage*,this->m_trumpButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_necklaceButton",MenuItemImage*,this->m_necklaceButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_ringButton",MenuItemImage*,this->m_ringButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_health",Label*,this->m_health);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_speed",Label*,this->m_speed);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_attack",Label*,this->m_attack);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_magicAttack",Label*,this->m_magicAttack);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_defence",Label*,this->m_defence);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_magicDefence",Label*,this->m_magicDefence);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_cardLayer",Layer*,this->m_cardLayer);
	return false;
}
// glue custom member here ;
bool FollowerProperty_CCB::onAssignCCBCustomProperty(cocos2d::Ref* pTarget, const char *pMemberVariableName, cocos2d::Value& pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

