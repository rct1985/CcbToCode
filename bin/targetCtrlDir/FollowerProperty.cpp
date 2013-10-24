//
//  FollowerProperty.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "FollowerProperty.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

FollowerProperty::FollowerProperty(){
}
FollowerProperty::~FollowerProperty(){
}
bool FollowerProperty::init(){
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

void FollowerProperty::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("FollowerProperty_CCB", FollowerProperty_CCB::FollowerProperty_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (FollowerProperty_CCB*)m_ccbReader->readNodeGraphFromFile("FollowerProperty.ccbi", this);

    m_ccbMember->setFollowerProperty(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void FollowerProperty::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
// end control call back

// menu call back   here ;
void FollowerProperty::selector_back(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void FollowerProperty::selector_weapon(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void FollowerProperty::selector_armor(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void FollowerProperty::selector_trump(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void FollowerProperty::selector_necklace(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void FollowerProperty::selector_ring(cocos2d::CCObject * pSender)
{
	//do what you want here
}
// end menu call back

