//
//  .cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//
//


#include ".h"
using namespace cocos2d;
using namespace cocos2d::extension;

void ::onNodeLoaded(cocos2d::CCNode *pNode, cocos2d::extension::CCNodeLoader *pNodeLoader)
{
}




//control button call back  here ;
// end control call back

// menu call back   here ;
// end menu call back

// glue menu callback here ;
SEL_MenuHandler ::onResolveCCBCCMenuItemSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue control button call back  here ;
SEL_CCControlHandler ::onResolveCCBCCControlSelector(cocos2d::CCObject *pTarget, const char *pSelectorName)
{
	return false;
}

// glue assigned member here ;
bool ::onAssignCCBMemberVariable(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::CCNode *pNode)
{	return false;
}
// glue custom member here ;
bool ::onAssignCCBCustomProperty(cocos2d::CCObject *pTarget, const char *pMemberVariableName, cocos2d::extension::CCBValue *pCCBValue)
{
    if (pTarget == this)
    {
	}
	return false;
}

