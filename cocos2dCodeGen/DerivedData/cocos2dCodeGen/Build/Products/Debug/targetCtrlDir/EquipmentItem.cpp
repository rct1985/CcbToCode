//
//  EquipmentItem.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "EquipmentItem.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

EquipmentItem::EquipmentItem(){
}
EquipmentItem::~EquipmentItem(){
    CC_SAFE_DELETE(m_ccbReader);
}
bool EquipmentItem::init(){
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

void EquipmentItem::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("EquipmentItem_CCB", EquipmentItem_CCB::EquipmentItem_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (EquipmentItem_CCB*)m_ccbReader->readNodeGraphFromFile("EquipmentItem.ccbi", this);

    m_ccbMember->setEquipmentItem(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void EquipmentItem::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
void EquipmentItem::selector_upgrade(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//do what you want here
}
void EquipmentItem::selector_equip(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent)
{
	//do what you want here
}
// end control call back

// menu call back   here ;
void EquipmentItem::selector_iconButton(cocos2d::CCObject * pSender)
{
	//do what you want here
}
// end menu call back

