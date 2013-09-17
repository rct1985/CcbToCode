//
//  PVESmallNodeInfo.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__PVESmallNodeInfo__
#define __autogen_ccbuilder__PVESmallNodeInfo__

#include "Global/Constants.h"
#include "PVESmallNodeInfo_CCB.h"

class PVESmallNodeInfo
:public cocos2d::CCLayer
{
public:
    PVESmallNodeInfo();
    virtual ~PVESmallNodeInfo();

    CREATE_FUNC(PVESmallNodeInfo);
    bool init();
    
    void initCCB();
    void giveValueToCCB();

private:
    cocos2d::extension::CCBReader* m_ccbReader;
    PVESmallNodeInfo_CCB* m_ccbMember;
};
#endif

