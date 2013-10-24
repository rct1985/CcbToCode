//
//  Training.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "Training.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

Training::Training(){
}
Training::~Training(){
    CC_SAFE_DELETE(m_ccbReader);
}
bool Training::init(){
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

void Training::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("Training_CCB", Training_CCB::Training_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (Training_CCB*)m_ccbReader->readNodeGraphFromFile("Training.ccbi", this);

    m_ccbMember->setTraining(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void Training::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
void Training::selector_reset(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//do what you want here
}
void Training::selector_back(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//do what you want here
}
// end control call back

// menu call back   here ;
void Training::selector_singleFree(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void Training::selector_single(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void Training::selector_multiFree(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void Training::selector_multi(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void Training::selector_resultAccept(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void Training::selector_resultRefuse(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void Training::selector_confirmYES(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void Training::selector_confirmNO(cocos2d::CCObject * pSender)
{
	//do what you want here
}
// end menu call back

