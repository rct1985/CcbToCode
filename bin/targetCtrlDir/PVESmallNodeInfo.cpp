//
//  PVESmallNodeInfo.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "PVESmallNodeInfo.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

PVESmallNodeInfo::PVESmallNodeInfo(){
}
PVESmallNodeInfo::~PVESmallNodeInfo(){
}
bool PVESmallNodeInfo::init(){
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

void PVESmallNodeInfo::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("PVESmallNodeInfo_CCB", PVESmallNodeInfo_CCB::PVESmallNodeInfo_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (BattleBeginInfo_CCB*)m_ccbReader->readNodeGraphFromFile("BattleBeginInfo.ccbi", this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void PVESmallNodeInfo::giveValueToCCB(){
    //do what your want here
}


