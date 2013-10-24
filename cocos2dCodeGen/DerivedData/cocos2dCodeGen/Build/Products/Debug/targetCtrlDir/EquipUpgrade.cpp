//
//  EquipUpgrade.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "EquipUpgrade.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

EquipUpgrade::EquipUpgrade(){
}
EquipUpgrade::~EquipUpgrade(){
    CC_SAFE_DELETE(m_ccbReader);
}
bool EquipUpgrade::init(){
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

void EquipUpgrade::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("EquipUpgrade_CCB", EquipUpgrade_CCB::EquipUpgrade_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (EquipUpgrade_CCB*)m_ccbReader->readNodeGraphFromFile("EquipUpgrade.ccbi", this);

    m_ccbMember->setEquipUpgrade(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void EquipUpgrade::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
// end control call back

// menu call back   here ;
void EquipUpgrade::selector_back(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void EquipUpgrade::selector_upgrade(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void EquipUpgrade::selector_resultOK(cocos2d::CCObject * pSender)
{
	//do what you want here
}
// end menu call back

