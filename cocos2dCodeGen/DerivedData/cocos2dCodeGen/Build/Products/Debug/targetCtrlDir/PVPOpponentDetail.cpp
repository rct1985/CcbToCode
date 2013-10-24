//
//  PVPOpponentDetail.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "PVPOpponentDetail.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

PVPOpponentDetail::PVPOpponentDetail(){
}
PVPOpponentDetail::~PVPOpponentDetail(){
    CC_SAFE_DELETE(m_ccbReader);
}
bool PVPOpponentDetail::init(){
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

void PVPOpponentDetail::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("PVPOpponentDetail_CCB", PVPOpponentDetail_CCB::PVPOpponentDetail_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (PVPOpponentDetail_CCB*)m_ccbReader->readNodeGraphFromFile("PVPOpponentDetail.ccbi", this);

    m_ccbMember->setPVPOpponentDetail(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void PVPOpponentDetail::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
// end control call back

// menu call back   here ;
void PVPOpponentDetail::clickButton_exit(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void PVPOpponentDetail::clickButton_challage(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void PVPOpponentDetail::clickButton_showDetail(cocos2d::CCObject * pSender)
{
	//do what you want here
}
// end menu call back

