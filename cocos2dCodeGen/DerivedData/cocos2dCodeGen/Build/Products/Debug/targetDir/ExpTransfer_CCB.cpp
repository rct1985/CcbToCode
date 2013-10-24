//
//  ExpTransfer_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "ExpTransfer_CCB.h"
#include "ExpTransfer.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void ExpTransfer_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void ExpTransfer_CCB::selector_back(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_expTransfer->selector_back(pSender);
}
void ExpTransfer_CCB::selector_transfer(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_expTransfer->selector_transfer(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler ExpTransfer_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_back",ExpTransfer_CCB::selector_back);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_transfer",ExpTransfer_CCB::selector_transfer);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler ExpTransfer_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool ExpTransfer_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_buttons",CCMenu*,this->m_buttons);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_cardName0",CCLabelTTF*,this->m_cardName0);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_cardimage0",CCSprite*,this->m_cardimage0);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_positionText0",CCLabelTTF*,this->m_positionText0);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_cardName1",CCLabelTTF*,this->m_cardName1);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_cardImage1",CCSprite*,this->m_cardImage1);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_positionText1",CCLabelTTF*,this->m_positionText1);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_starIcon0",CCSprite*,this->m_starIcon0);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_levelText0",CCLabelTTF*,this->m_levelText0);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_levelText1",CCLabelTTF*,this->m_levelText1);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_starIcon1",CCSprite*,this->m_starIcon1);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_itemScrollArea",CCLayer*,this->m_itemScrollArea);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_cardScrollArea",CCLayer*,this->m_cardScrollArea);
	return false;
}
// glue custom member here ;
bool ExpTransfer_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

