//
//  SingleCard_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "SingleCard_CCB.h"
#include "SingleCard.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void SingleCard_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
void SingleCard_CCB::selector_view(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//feel free to modify code below
	m_singleCard->selector_view(pSender, pCCControlEvent);
}
void SingleCard_CCB::selector_switch(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//feel free to modify code below
	m_singleCard->selector_switch(pSender, pCCControlEvent);
}
// end control call back

// menu call back   here ;
// end menu call back

// glue menu callback here ;
SEL_MenuHandler SingleCard_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler SingleCard_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this,"selector_view",SingleCard_CCB::selector_view);
	CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this,"selector_switch",SingleCard_CCB::selector_switch);
	return false;
}

// glue assigned member here ;
bool SingleCard_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_image",CCSprite*,this->m_image);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_power",CCLabelTTF*,this->m_power);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_viewButton",CCControlButton*,this->m_viewButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_switchButton",CCControlButton*,this->m_switchButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_skills",CCLayer*,this->m_skills);
	return false;
}
// glue custom member here ;
bool SingleCard_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

