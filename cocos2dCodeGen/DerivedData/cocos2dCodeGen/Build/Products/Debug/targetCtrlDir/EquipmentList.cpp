//
//  EquipmentList.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "EquipmentList.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

EquipmentList::EquipmentList(){
}
EquipmentList::~EquipmentList(){
    CC_SAFE_DELETE(m_ccbReader);
}
bool EquipmentList::init(){
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

void EquipmentList::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("EquipmentList_CCB", EquipmentList_CCB::EquipmentList_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (EquipmentList_CCB*)m_ccbReader->readNodeGraphFromFile("EquipmentList.ccbi", this);

    m_ccbMember->setEquipmentList(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void EquipmentList::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
// end control call back

// menu call back   here ;
void EquipmentList::selector_noneFilter(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void EquipmentList::selector_weaponFilter(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void EquipmentList::selector_armorFilter(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void EquipmentList::selector_magicWeaponFilter(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void EquipmentList::selector_necklaceFilter(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void EquipmentList::selector_ringFilter(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void EquipmentList::selector_back(cocos2d::CCObject * pSender)
{
	//do what you want here
}
// end menu call back

