//
//  Formation.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "Formation.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

Formation::Formation(){
}
Formation::~Formation(){
}
bool Formation::init(){
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

void Formation::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("Formation_CCB", Formation_CCB::Formation_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (Formation_CCB*)m_ccbReader->readNodeGraphFromFile("Formation.ccbi", this);

    m_ccbMember->setFormation(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void Formation::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
void Formation::selector_back(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//do what you want here
}
void Formation::selector_quickGroup(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//do what you want here
}
void Formation::selector_showGroupList(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//do what you want here
}
void Formation::selector_showGroupDetail(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//do what you want here
}
// end control call back

// menu call back   here ;
void Formation::selector_showCard(cocos2d::CCObject * pSender)
{
	//do what you want here
}
// end menu call back

