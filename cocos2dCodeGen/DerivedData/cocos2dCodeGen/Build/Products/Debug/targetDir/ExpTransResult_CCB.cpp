//
//  ExpTransResult_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "ExpTransResult_CCB.h"
#include "ExpTransResult.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void ExpTransResult_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void ExpTransResult_CCB::selector_confirm(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_expTransResult->selector_confirm(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler ExpTransResult_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_confirm",ExpTransResult_CCB::selector_confirm);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler ExpTransResult_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool ExpTransResult_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_image",CCSprite*,this->m_image);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_exp",CCLabelTTF*,this->m_exp);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_level",CCLabelTTF*,this->m_level);
	return false;
}
// glue custom member here ;
bool ExpTransResult_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

