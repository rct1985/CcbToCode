//
//  BattleRewardLayer_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "BattleRewardLayer_CCB.h"
#include "BattleRewardLayer.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void BattleRewardLayer_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void BattleRewardLayer_CCB::clickButton_confirm(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_battleRewardLayer->clickButton_confirm(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler BattleRewardLayer_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_confirm",BattleRewardLayer_CCB::clickButton_confirm);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler BattleRewardLayer_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool BattleRewardLayer_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menu",CCMenu*,this->m_menu);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItem_confirm",CCMenuItemImage*,this->m_menuItem_confirm);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelExp",CCLabelTTF*,this->m_labelExp);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelGameCoin",CCLabelTTF*,this->m_labelGameCoin);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteItem_0",CCSprite*,this->m_spriteItem_0);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteItem_1",CCSprite*,this->m_spriteItem_1);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteItem_2",CCSprite*,this->m_spriteItem_2);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteItem_3",CCSprite*,this->m_spriteItem_3);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteItem_4",CCSprite*,this->m_spriteItem_4);
	return false;
}
// glue custom member here ;
bool BattleRewardLayer_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

