//
//  MazeLayer_CCB.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//

#include "MazeLayer_CCB.h"
#include "MazeLayer.h"
using namespace cocos2d;
using namespace cocos2d::extension;

void MazeLayer_CCB::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}
//control button call back  here ;
// end control call back

// menu call back   here ;
void MazeLayer_CCB::clickButton_exit(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_mazeLayer->clickButton_exit(pSender);
}
void MazeLayer_CCB::clickButton_reset(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_mazeLayer->clickButton_reset(pSender);
}
void MazeLayer_CCB::clickButton_explore(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_mazeLayer->clickButton_explore(pSender);
}
void MazeLayer_CCB::clickButton_help(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_mazeLayer->clickButton_help(pSender);
}
void MazeLayer_CCB::clickButtonForInstruction_exit(cocos2d::CCObject * pSender)
{
	//feel free to modify code below
	m_mazeLayer->clickButtonForInstruction_exit(pSender);
}
// end menu call back

// glue menu callback here ;
SEL_MenuHandler MazeLayer_CCB::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_exit",MazeLayer_CCB::clickButton_exit);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_reset",MazeLayer_CCB::clickButton_reset);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_explore",MazeLayer_CCB::clickButton_explore);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButton_help",MazeLayer_CCB::clickButton_help);
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE(this,"clickButtonForInstruction_exit",MazeLayer_CCB::clickButtonForInstruction_exit);
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler MazeLayer_CCB::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool MazeLayer_CCB::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelChallengePoint",CCLabelTTF*,this->m_labelChallengePoint);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelMazeName",CCLabelTTF*,this->m_labelMazeName);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteReward_0",CCSprite*,this->m_spriteReward_0);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_spriteReward_1",CCSprite*,this->m_spriteReward_1);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelItemName_0",CCLabelTTF*,this->m_labelItemName_0);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelItemName_1",CCLabelTTF*,this->m_labelItemName_1);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menu",CCMenu*,this->m_menu);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItem_exit",CCMenuItemImage*,this->m_menuItem_exit);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItem_reset",CCMenuItemImage*,this->m_menuItem_reset);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItem_explore",CCMenuItemImage*,this->m_menuItem_explore);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItem_help",CCMenuItemImage*,this->m_menuItem_help);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelProgress",CCLabelTTF*,this->m_labelProgress);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_layerForInstruction",CCLayerColor*,this->m_layerForInstruction);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelInstructionTitle",CCLabelTTF*,this->m_labelInstructionTitle);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_labelInstructionContent",CCLabelTTF*,this->m_labelInstructionContent);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuForInstruction",CCMenu*,this->m_menuForInstruction);
	CCB_MEMBERVARIABLEASSIGNER_GLUE(this,"m_menuItemForInstruction_exit",CCMenuItemImage*,this->m_menuItemForInstruction_exit);
	return false;
}
// glue custom member here ;
bool MazeLayer_CCB::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

