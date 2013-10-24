//
//  CampCityLayer.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "CampCityLayer.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

CampCityLayer::CampCityLayer(){
}
CampCityLayer::~CampCityLayer(){
    CC_SAFE_DELETE(m_ccbReader);
}
bool CampCityLayer::init(){
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

void CampCityLayer::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("CampCityLayer_CCB", CampCityLayer_CCB::CampCityLayer_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (CampCityLayer_CCB*)m_ccbReader->readNodeGraphFromFile("CampCityLayer.ccbi", this);

    m_ccbMember->setCampCityLayer(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void CampCityLayer::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
// end control call back

// menu call back   here ;
void CampCityLayer::clickButton_exit(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void CampCityLayer::clickButton_attack(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void CampCityLayer::clickButton_defence(cocos2d::CCObject * pSender)
{
	//do what you want here
}
// end menu call back

