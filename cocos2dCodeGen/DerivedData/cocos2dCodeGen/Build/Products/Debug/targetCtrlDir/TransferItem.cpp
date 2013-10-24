//
//  TransferItem.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "TransferItem.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

TransferItem::TransferItem(){
}
TransferItem::~TransferItem(){
    CC_SAFE_DELETE(m_ccbReader);
}
bool TransferItem::init(){
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

void TransferItem::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("TransferItem_CCB", TransferItem_CCB::TransferItem_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (TransferItem_CCB*)m_ccbReader->readNodeGraphFromFile("TransferItem.ccbi", this);

    m_ccbMember->setTransferItem(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void TransferItem::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
// end control call back

// menu call back   here ;
void TransferItem::selector_selected(cocos2d::CCObject * pSender)
{
	//do what you want here
}
// end menu call back

