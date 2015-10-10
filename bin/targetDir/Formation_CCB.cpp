//
//  Formation_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//  for cocos2dx_3_x

#include "Formation_CCB.h"
#include "Formation.h"
using namespace cocos2d;
using namespace cocos2d::extension;
using namespace cocosbuilder;

void Formation_CCB::onNodeLoaded(cocos2d::Node *pNode, cocosbuilder::NodeLoader *pNodeLoader)
{
}
//control button call back  here ;
void Formation_CCB::selector_back(Ref * pSender)
{
	//feel free to modify code below
	m_formation->selector_back(pSender);
}
void Formation_CCB::selector_quickGroup(Ref * pSender)
{
	//feel free to modify code below
	m_formation->selector_quickGroup(pSender);
}
void Formation_CCB::selector_showGroupList(Ref * pSender)
{
	//feel free to modify code below
	m_formation->selector_showGroupList(pSender);
}
void Formation_CCB::selector_showGroupDetail(Ref * pSender)
{
	//feel free to modify code below
	m_formation->selector_showGroupDetail(pSender);
}
// end control call back

// menu call back   here ;
void Formation_CCB::selector_showCard(cocos2d::Ref * pSender)
{
	//feel free to modify code below
	m_formation->selector_showCard(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler Formation_CCB::onResolveCCBCCMenuItemSelector(cocos2d::Ref* pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_showCard",Formation_CCB::selector_showCard);
	return NULL;
}

// glue control button call back  here ;
cocos2d::extension::Control::Handler Formation_CCB::onResolveCCBCCControlSelector(cocos2d::Ref* pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this,"selector_back",Formation_CCB::selector_back);
	CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this,"selector_quickGroup",Formation_CCB::selector_quickGroup);
	CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this,"selector_showGroupList",Formation_CCB::selector_showGroupList);
	CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this,"selector_showGroupDetail",Formation_CCB::selector_showGroupDetail);
	return NULL;
}

// glue assigned member here ;
bool Formation_CCB::onAssignCCBMemberVariable(cocos2d::Ref* pTarget, const char *pMemberVariableName, cocos2d::Node *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_battleArray",Menu*,this->m_battleArray);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_arrayButton4",MenuItemImage*,this->m_arrayButton4);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_arrayButton1",MenuItemImage*,this->m_arrayButton1);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_arrayButton5",MenuItemImage*,this->m_arrayButton5);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_arrayButton2",MenuItemImage*,this->m_arrayButton2);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_arrayButton6",MenuItemImage*,this->m_arrayButton6);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_arrayButton3",MenuItemImage*,this->m_arrayButton3);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_score",Label*,this->m_score);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_defence",Label*,this->m_defence);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_speed",Label*,this->m_speed);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_inumFormation",Label*,this->m_inumFormation);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_magicDefence",Label*,this->m_magicDefence);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_leadership",Label*,this->m_leadership);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_damage",Label*,this->m_damage);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_magicDamage",Label*,this->m_magicDamage);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_hp",Label*,this->m_hp);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_layerDetail",Layer*,this->m_layerDetail);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_title",Label*,this->m_title);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_detailIcon",Sprite*,this->m_detailIcon);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_detail",Label*,this->m_detail);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_layerList",Layer*,this->m_layerList);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_listIcon0",ControlButton*,this->m_listIcon0);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_listIcon1",ControlButton*,this->m_listIcon1);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_listIcon2",ControlButton*,this->m_listIcon2);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_listIcon3",ControlButton*,this->m_listIcon3);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_listIcon4",ControlButton*,this->m_listIcon4);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_listIcon5",ControlButton*,this->m_listIcon5);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_listIcon6",ControlButton*,this->m_listIcon6);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_listIcon7",ControlButton*,this->m_listIcon7);
	return false;
}
// glue custom member here ;
bool Formation_CCB::onAssignCCBCustomProperty(cocos2d::Ref* pTarget, const char *pMemberVariableName, cocos2d::Value& pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

