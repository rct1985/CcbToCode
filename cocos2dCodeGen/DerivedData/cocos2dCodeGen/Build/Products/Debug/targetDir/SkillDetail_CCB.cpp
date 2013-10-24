//
//  SkillDetail_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "SkillDetail_CCB.h"
#include "SkillDetail.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void SkillDetail_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void SkillDetail_CCB::sel_close(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_skillDetail->sel_close(pSender);
}
void SkillDetail_CCB::sel_change(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_skillDetail->sel_change(pSender);
}
void SkillDetail_CCB::sel_upgrade(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_skillDetail->sel_upgrade(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler SkillDetail_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"sel_close",SkillDetail_CCB::sel_close);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"sel_change",SkillDetail_CCB::sel_change);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"sel_upgrade",SkillDetail_CCB::sel_upgrade);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler SkillDetail_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool SkillDetail_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_icon",CCSprite*,this->m_icon);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_head",CCLabelTTF*,this->m_head);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_desc",CCLabelTTF*,this->m_desc);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menu",CCMenu*,this->m_menu);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_change",CCMenuItemImage*,this->m_change);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_upgrade",CCMenuItemImage*,this->m_upgrade);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_descNextLvl",CCLabelTTF*,this->m_descNextLvl);
	return false;
}
// glue custom member here ;
bool SkillDetail_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

