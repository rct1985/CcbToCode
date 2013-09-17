//
//  Formation_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "Formation_CCB.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void Formation_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
void Formation_CCB::selector_back(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//feel free to modify code below
	m_formation->selector_back(pSender, pCCControlEvent);
}
void Formation_CCB::selector_quickGroup(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//feel free to modify code below
	m_formation->selector_quickGroup(pSender, pCCControlEvent);
}
void Formation_CCB::selector_showGroupList(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//feel free to modify code below
	m_formation->selector_showGroupList(pSender, pCCControlEvent);
}
void Formation_CCB::selector_showGroupDetail(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//feel free to modify code below
	m_formation->selector_showGroupDetail(pSender, pCCControlEvent);
}
// end control call back

// menu call back   here ;
void Formation_CCB::selector_showCard(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_formation->selector_showCard(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler Formation_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_showCard",Formation_CCB::selector_showCard);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler Formation_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this,"selector_back",Formation_CCB::selector_back);
	CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this,"selector_quickGroup",Formation_CCB::selector_quickGroup);
	CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this,"selector_showGroupList",Formation_CCB::selector_showGroupList);
	CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this,"selector_showGroupDetail",Formation_CCB::selector_showGroupDetail);
	return false;
}

// glue assigned member here ;
bool Formation_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_battleArray",CCMenu*,this->m_battleArray);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_arrayButton4",CCMenuItemImage*,this->m_arrayButton4);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_arrayButton1",CCMenuItemImage*,this->m_arrayButton1);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_arrayButton5",CCMenuItemImage*,this->m_arrayButton5);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_arrayButton2",CCMenuItemImage*,this->m_arrayButton2);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_arrayButton6",CCMenuItemImage*,this->m_arrayButton6);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_arrayButton3",CCMenuItemImage*,this->m_arrayButton3);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_score",CCLabelTTF*,this->m_score);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_defence",CCLabelTTF*,this->m_defence);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_speed",CCLabelTTF*,this->m_speed);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_inumFormation",CCLabelTTF*,this->m_inumFormation);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_magicDefence",CCLabelTTF*,this->m_magicDefence);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_leadership",CCLabelTTF*,this->m_leadership);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_damage",CCLabelTTF*,this->m_damage);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_magicDamage",CCLabelTTF*,this->m_magicDamage);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_hp",CCLabelTTF*,this->m_hp);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_layerDetail",CCLayer*,this->m_layerDetail);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_title",CCLabelTTF*,this->m_title);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_detailIcon",CCSprite*,this->m_detailIcon);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_detail",CCLabelTTF*,this->m_detail);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_layerList",CCLayer*,this->m_layerList);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_listIcon0",CCControlButton*,this->m_listIcon0);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_listIcon1",CCControlButton*,this->m_listIcon1);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_listIcon2",CCControlButton*,this->m_listIcon2);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_listIcon3",CCControlButton*,this->m_listIcon3);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_listIcon4",CCControlButton*,this->m_listIcon4);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_listIcon5",CCControlButton*,this->m_listIcon5);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_listIcon6",CCControlButton*,this->m_listIcon6);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_listIcon7",CCControlButton*,this->m_listIcon7);
	return false;
}
// glue custom member here ;
bool Formation_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

