//
//  SingleCardHorizontal.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "SingleCardHorizontal.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

SingleCardHorizontal::SingleCardHorizontal(){
}
SingleCardHorizontal::~SingleCardHorizontal(){
    CC_SAFE_DELETE(m_ccbReader);
}
bool SingleCardHorizontal::init(){
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

void SingleCardHorizontal::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("SingleCardHorizontal_CCB", SingleCardHorizontal_CCB::SingleCardHorizontal_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (SingleCardHorizontal_CCB*)m_ccbReader->readNodeGraphFromFile("SingleCardHorizontal.ccbi", this);

    m_ccbMember->setSingleCardHorizontal(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void SingleCardHorizontal::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
// end control call back

// menu call back   here ;
void SingleCardHorizontal::selector_select(cocos2d::CCObject * pSender)
{
	//do what you want here
}
// end menu call back

