//
//  CampHonorCardLayer.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "CampHonorCardLayer.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

CampHonorCardLayer::CampHonorCardLayer(){
}
CampHonorCardLayer::~CampHonorCardLayer(){
    CC_SAFE_DELETE(m_ccbReader);
}
bool CampHonorCardLayer::init(){
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

void CampHonorCardLayer::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("CampHonorCardLayer_CCB", CampHonorCardLayer_CCB::CampHonorCardLayer_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (CampHonorCardLayer_CCB*)m_ccbReader->readNodeGraphFromFile("CampHonorCardLayer.ccbi", this);

    m_ccbMember->setCampHonorCardLayer(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void CampHonorCardLayer::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
// end control call back

// menu call back   here ;
void CampHonorCardLayer::clickButton_exchange(cocos2d::CCObject * pSender)
{
	//do what you want here
}
// end menu call back

