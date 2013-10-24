//
//  CampHonorCardResultLayer.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "CampHonorCardResultLayer.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

CampHonorCardResultLayer::CampHonorCardResultLayer(){
}
CampHonorCardResultLayer::~CampHonorCardResultLayer(){
    CC_SAFE_DELETE(m_ccbReader);
}
bool CampHonorCardResultLayer::init(){
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

void CampHonorCardResultLayer::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("CampHonorCardResultLayer_CCB", CampHonorCardResultLayer_CCB::CampHonorCardResultLayer_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (CampHonorCardResultLayer_CCB*)m_ccbReader->readNodeGraphFromFile("CampHonorCardResultLayer.ccbi", this);

    m_ccbMember->setCampHonorCardResultLayer(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void CampHonorCardResultLayer::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
// end control call back

// menu call back   here ;
void CampHonorCardResultLayer::clickButton_sell(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void CampHonorCardResultLayer::clickButton_accept(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void CampHonorCardResultLayer::clickButton_exit(cocos2d::CCObject * pSender)
{
	//do what you want here
}
// end menu call back

