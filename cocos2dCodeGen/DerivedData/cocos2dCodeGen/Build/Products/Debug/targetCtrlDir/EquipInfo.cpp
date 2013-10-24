//
//  EquipInfo.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "EquipInfo.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

EquipInfo::EquipInfo(){
}
EquipInfo::~EquipInfo(){
    CC_SAFE_DELETE(m_ccbReader);
}
bool EquipInfo::init(){
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

void EquipInfo::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("EquipInfo_CCB", EquipInfo_CCB::EquipInfo_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (EquipInfo_CCB*)m_ccbReader->readNodeGraphFromFile("EquipInfo.ccbi", this);

    m_ccbMember->setEquipInfo(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void EquipInfo::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
// end control call back

// menu call back   here ;
void EquipInfo::selector_back(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void EquipInfo::selector_sell(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void EquipInfo::selector_upgrade(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void EquipInfo::selector_equip(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void EquipInfo::selector_sellConfirm(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void EquipInfo::selector_sellCancel(cocos2d::CCObject * pSender)
{
	//do what you want here
}
// end menu call back

