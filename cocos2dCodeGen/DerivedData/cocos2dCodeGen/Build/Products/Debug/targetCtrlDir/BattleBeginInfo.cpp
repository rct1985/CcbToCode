//
//  BattleBeginInfo.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "BattleBeginInfo.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

BattleBeginInfo::BattleBeginInfo(){
}
BattleBeginInfo::~BattleBeginInfo(){
    CC_SAFE_DELETE(m_ccbReader);
}
bool BattleBeginInfo::init(){
    bool l_bResult = true;
    do{
        if(!CCLayer::init()){
            l_bResult = false;
        }
        this->initCCB();
        this->giveValueToCCB();
    }while(0);
    return l_bResult;
}

void BattleBeginInfo::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("BattleBeginInfo_CCB", BattleBeginInfo_CCB::BattleBeginInfo_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (BattleBeginInfo_CCB*)m_ccbReader->readNodeGraphFromFile("BattleBeginInfo.ccbi", this);

    m_ccbMember->setBattleBeginInfo(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void BattleBeginInfo::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
// end control call back

// menu call back   here ;
// end menu call back

