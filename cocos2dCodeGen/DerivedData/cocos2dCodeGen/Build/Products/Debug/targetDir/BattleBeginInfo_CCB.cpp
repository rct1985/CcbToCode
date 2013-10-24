//
//  BattleBeginInfo_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "BattleBeginInfo_CCB.h"
#include "BattleBeginInfo.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void BattleBeginInfo_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
// end menu call back

// glue menu callback here ;
SEL_MenuHandler BattleBeginInfo_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler BattleBeginInfo_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool BattleBeginInfo_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteMainActor_left",CCSprite*,this->m_spriteMainActor_left);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteMainActor_right",CCSprite*,this->m_spriteMainActor_right);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_layerForCard_right",CCLayer*,this->m_layerForCard_right);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteCard_right_05",CCSprite*,this->m_spriteCard_right_05);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteCard_right_04",CCSprite*,this->m_spriteCard_right_04);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteCard_right_03",CCSprite*,this->m_spriteCard_right_03);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteCard_right_02",CCSprite*,this->m_spriteCard_right_02);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteCard_right_01",CCSprite*,this->m_spriteCard_right_01);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteCard_right_00",CCSprite*,this->m_spriteCard_right_00);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteLight_right",CCSprite*,this->m_spriteLight_right);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_layerForCard_left",CCLayer*,this->m_layerForCard_left);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteCard_left_05",CCSprite*,this->m_spriteCard_left_05);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteCard_left_04",CCSprite*,this->m_spriteCard_left_04);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteCard_left_03",CCSprite*,this->m_spriteCard_left_03);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteCard_left_02",CCSprite*,this->m_spriteCard_left_02);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteCard_left_01",CCSprite*,this->m_spriteCard_left_01);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteCard_left_00",CCSprite*,this->m_spriteCard_left_00);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteLight_left",CCSprite*,this->m_spriteLight_left);
	return false;
}
// glue custom member here ;
bool BattleBeginInfo_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

