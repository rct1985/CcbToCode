//
//  CampHonorExchangeLayer.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "CampHonorExchangeLayer.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

CampHonorExchangeLayer::CampHonorExchangeLayer(){
}
CampHonorExchangeLayer::~CampHonorExchangeLayer(){
    CC_SAFE_DELETE(m_ccbReader);
}
bool CampHonorExchangeLayer::init(){
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

void CampHonorExchangeLayer::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("CampHonorExchangeLayer_CCB", CampHonorExchangeLayer_CCB::CampHonorExchangeLayer_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (CampHonorExchangeLayer_CCB*)m_ccbReader->readNodeGraphFromFile("CampHonorExchangeLayer.ccbi", this);

    m_ccbMember->setCampHonorExchangeLayer(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void CampHonorExchangeLayer::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
// end control call back

// menu call back   here ;
void CampHonorExchangeLayer::clickButton_exit(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void CampHonorExchangeLayer::clickButton_randomExchange(cocos2d::CCObject * pSender)
{
	//do what you want here
}
// end menu call back

