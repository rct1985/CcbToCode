//
//  SkillDetail.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "SkillDetail.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

SkillDetail::SkillDetail(){
}
SkillDetail::~SkillDetail(){
    CC_SAFE_DELETE(m_ccbReader);
}
bool SkillDetail::init(){
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

void SkillDetail::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("SkillDetail_CCB", SkillDetail_CCB::SkillDetail_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (SkillDetail_CCB*)m_ccbReader->readNodeGraphFromFile("SkillDetail.ccbi", this);

    m_ccbMember->setSkillDetail(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void SkillDetail::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
// end control call back

// menu call back   here ;
void SkillDetail::sel_close(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void SkillDetail::sel_change(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void SkillDetail::sel_upgrade(cocos2d::CCObject * pSender)
{
	//do what you want here
}
// end menu call back

