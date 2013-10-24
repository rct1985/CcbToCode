//
//  TransferItem_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "TransferItem_CCB.h"
#include "TransferItem.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void TransferItem_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void TransferItem_CCB::selector_selected(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_transferItem->selector_selected(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler TransferItem_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_selected",TransferItem_CCB::selector_selected);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler TransferItem_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool TransferItem_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_icon",CCSprite*,this->m_icon);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_name",CCLabelTTF*,this->m_name);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_amount",CCLabelTTF*,this->m_amount);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_selectMenu",CCMenuItemImage*,this->m_selectMenu);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_exp",CCLabelTTF*,this->m_exp);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_level",CCLabelTTF*,this->m_level);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_newLevel",CCLabelTTF*,this->m_newLevel);
	return false;
}
// glue custom member here ;
bool TransferItem_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

