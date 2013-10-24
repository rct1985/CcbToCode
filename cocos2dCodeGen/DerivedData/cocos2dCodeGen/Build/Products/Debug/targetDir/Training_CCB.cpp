//
//  Training_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "Training_CCB.h"
#include "Training.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void Training_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
void Training_CCB::selector_reset(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//feel free to modify code below
	m_training->selector_reset(pSender, pCCControlEvent);
}
void Training_CCB::selector_back(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//feel free to modify code below
	m_training->selector_back(pSender, pCCControlEvent);
}
// end control call back

// menu call back   here ;
void Training_CCB::selector_singleFree(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_training->selector_singleFree(pSender);
}
void Training_CCB::selector_single(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_training->selector_single(pSender);
}
void Training_CCB::selector_multiFree(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_training->selector_multiFree(pSender);
}
void Training_CCB::selector_multi(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_training->selector_multi(pSender);
}
void Training_CCB::selector_resultAccept(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_training->selector_resultAccept(pSender);
}
void Training_CCB::selector_resultRefuse(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_training->selector_resultRefuse(pSender);
}
void Training_CCB::selector_confirmYES(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_training->selector_confirmYES(pSender);
}
void Training_CCB::selector_confirmNO(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_training->selector_confirmNO(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler Training_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_singleFree",Training_CCB::selector_singleFree);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_single",Training_CCB::selector_single);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_multiFree",Training_CCB::selector_multiFree);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_multi",Training_CCB::selector_multi);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_resultAccept",Training_CCB::selector_resultAccept);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_resultRefuse",Training_CCB::selector_resultRefuse);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_confirmYES",Training_CCB::selector_confirmYES);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"selector_confirmNO",Training_CCB::selector_confirmNO);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler Training_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this,"selector_reset",Training_CCB::selector_reset);
	CCB_SELECTORRESOLVER_CCCONTROL_GLUE(this,"selector_back",Training_CCB::selector_back);
	return false;
}

// glue assigned member here ;
bool Training_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_trainingMenu",CCMenu*,this->m_trainingMenu);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_trainingTypeSingleFree",CCMenuItemImage*,this->m_trainingTypeSingleFree);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_trainingTypeSingle",CCMenuItemImage*,this->m_trainingTypeSingle);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_trainingTypeMultiFree",CCMenuItemImage*,this->m_trainingTypeMultiFree);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_trainingTypeMulti",CCMenuItemImage*,this->m_trainingTypeMulti);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_faithPoint",CCLabelTTF*,this->m_faithPoint);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_trainingTimes",CCLabelTTF*,this->m_trainingTimes);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_headImage",CCSprite*,this->m_headImage);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_name",CCLabelTTF*,this->m_name);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_faction",CCLabelTTF*,this->m_faction);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_level",CCLabelTTF*,this->m_level);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_power",CCLabelTTF*,this->m_power);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_health",CCLabelTTF*,this->m_health);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_attack",CCLabelTTF*,this->m_attack);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_magic",CCLabelTTF*,this->m_magic);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_defence",CCLabelTTF*,this->m_defence);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_resistance",CCLabelTTF*,this->m_resistance);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_resetButton",CCControlButton*,this->m_resetButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_backButton",CCControlButton*,this->m_backButton);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_speed",CCLabelTTF*,this->m_speed);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_resultLayer",CCLayer*,this->m_resultLayer);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_Dhealth",CCLabelTTF*,this->m_Dhealth);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_Dspeed",CCLabelTTF*,this->m_Dspeed);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_Dattack",CCLabelTTF*,this->m_Dattack);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_Dmagic",CCLabelTTF*,this->m_Dmagic);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_Ddefence",CCLabelTTF*,this->m_Ddefence);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_Dresistance",CCLabelTTF*,this->m_Dresistance);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_acceptMenu",CCMenu*,this->m_acceptMenu);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_confirmLayer",CCLayerColor*,this->m_confirmLayer);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_confirmText",CCLabelTTF*,this->m_confirmText);
	return false;
}
// glue custom member here ;
bool Training_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

