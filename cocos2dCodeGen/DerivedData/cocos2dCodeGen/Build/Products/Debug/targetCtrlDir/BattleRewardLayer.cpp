//
//  BattleRewardLayer.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "BattleRewardLayer.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

BattleRewardLayer::BattleRewardLayer(){
}
BattleRewardLayer::~BattleRewardLayer(){
    CC_SAFE_DELETE(m_ccbReader);
}
bool BattleRewardLayer::init(){
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

void BattleRewardLayer::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("BattleRewardLayer_CCB", BattleRewardLayer_CCB::BattleRewardLayer_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (BattleRewardLayer_CCB*)m_ccbReader->readNodeGraphFromFile("BattleRewardLayer.ccbi", this);

    m_ccbMember->setBattleRewardLayer(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void BattleRewardLayer::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
// end control call back

// menu call back   here ;
void BattleRewardLayer::clickButton_confirm(cocos2d::CCObject * pSender)
{
	//do what you want here
}
// end menu call back

