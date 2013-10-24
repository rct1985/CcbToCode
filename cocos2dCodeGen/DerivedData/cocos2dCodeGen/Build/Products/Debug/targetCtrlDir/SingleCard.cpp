//
//  SingleCard.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "SingleCard.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

SingleCard::SingleCard(){
}
SingleCard::~SingleCard(){
    CC_SAFE_DELETE(m_ccbReader);
}
bool SingleCard::init(){
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

void SingleCard::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("SingleCard_CCB", SingleCard_CCB::SingleCard_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (SingleCard_CCB*)m_ccbReader->readNodeGraphFromFile("SingleCard.ccbi", this);

    m_ccbMember->setSingleCard(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void SingleCard::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
void SingleCard::selector_view(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//do what you want here
}
void SingleCard::selector_switch(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//do what you want here
}
// end control call back

// menu call back   here ;
// end menu call back

