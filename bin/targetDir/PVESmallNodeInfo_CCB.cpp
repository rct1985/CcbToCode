//
//  PVESmallNodeInfo_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "PVESmallNodeInfo_CCB.h"
#include "PVESmallNodeInfo.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void PVESmallNodeInfo_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
// end menu call back

// glue menu callback here ;
SEL_MenuHandler PVESmallNodeInfo_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler PVESmallNodeInfo_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool PVESmallNodeInfo_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelBigNodeName",CCLabelTTF*,this->m_labelBigNodeName);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelRecommandLevel",CCLabelTTF*,this->m_labelRecommandLevel);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelEnergyLeft",CCLabelTTF*,this->m_labelEnergyLeft);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelSmallNodeDes",CCLabelTTF*,this->m_labelSmallNodeDes);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelPrize_gameCoin",CCLabelTTF*,this->m_labelPrize_gameCoin);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelPrize_exp",CCLabelTTF*,this->m_labelPrize_exp);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spritePrizeItem_one",CCSprite*,this->m_spritePrizeItem_one);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spritePrizeItem_another",CCSprite*,this->m_spritePrizeItem_another);
	return false;
}
// glue custom member here ;
bool PVESmallNodeInfo_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

