//
//  ExpTransfer.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "ExpTransfer.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

ExpTransfer::ExpTransfer(){
}
ExpTransfer::~ExpTransfer(){
    CC_SAFE_DELETE(m_ccbReader);
}
bool ExpTransfer::init(){
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

void ExpTransfer::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("ExpTransfer_CCB", ExpTransfer_CCB::ExpTransfer_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (ExpTransfer_CCB*)m_ccbReader->readNodeGraphFromFile("ExpTransfer.ccbi", this);

    m_ccbMember->setExpTransfer(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void ExpTransfer::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
// end control call back

// menu call back   here ;
void ExpTransfer::selector_back(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void ExpTransfer::selector_transfer(cocos2d::CCObject * pSender)
{
	//do what you want here
}
// end menu call back

