//
//  Formation.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#ifndef __autogen_ccbuilder__Formation__
#define __autogen_ccbuilder__Formation__

#include "Global/Constants.h"
#include "Formation_CCB.h"

class Formation
:public cocos2d::CCLayer
{
public:
    Formation();
    virtual ~Formation();

    CREATE_FUNC(Formation);
    bool init();
    
    void initCCB();
    void giveValueToCCB();

private:
    cocos2d::extension::CCBReader* m_ccbReader;
    Formation_CCB* m_ccbMember;
};
#endif

