//
//  SkillUpgrade.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "SkillUpgrade.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

SkillUpgrade::SkillUpgrade(){
}
SkillUpgrade::~SkillUpgrade(){
    CC_SAFE_DELETE(m_ccbReader);
}
bool SkillUpgrade::init(){
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

void SkillUpgrade::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("SkillUpgrade_CCB", SkillUpgrade_CCB::SkillUpgrade_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (SkillUpgrade_CCB*)m_ccbReader->readNodeGraphFromFile("SkillUpgrade.ccbi", this);

    m_ccbMember->setSkillUpgrade(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void SkillUpgrade::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
// end control call back

// menu call back   here ;
void SkillUpgrade::selector_back(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void SkillUpgrade::selector_transfer(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void SkillUpgrade::selector_select_item(cocos2d::CCObject * pSender)
{
	//do what you want here
}
// end menu call back

