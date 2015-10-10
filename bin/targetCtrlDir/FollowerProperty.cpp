//
//  FollowerProperty.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//
//  for cocos2dx_3_x

#include "FollowerProperty.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;
using namespace cocosbuilder;

FollowerProperty::FollowerProperty(){
    m_strCCBIFile = "FollowerProperty.ccbi";
}
FollowerProperty::~FollowerProperty(){
    //CC_SAFE_DELETE(m_ccbReader);
}
FollowerProperty* FollowerProperty::create(string p_strCCBIFile){
    FollowerProperty* l_instance = new FollowerProperty();
    if(l_instance){
        l_instance->m_strCCBIFile = p_strCCBIFile;
        l_instance->init();
        l_instance->autorelease();
    }
    return l_instance;
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
    NodeLoaderLibrary *lib = NodeLoaderLibrary::getInstance();
    lib->registerNodeLoader("FollowerProperty_CCB", FollowerProperty_CCB::FollowerProperty_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    //m_ccbMember = (FollowerProperty_CCB*)m_ccbReader->readNodeGraphFromFile("FollowerProperty.ccbi", this);
    m_ccbMember = (FollowerProperty_CCB*)m_ccbReader->readNodeGraphFromFile(m_strCCBIFile.c_str(), this);

    m_ccbMember->setFollowerProperty(this);

    //CCB
    m_ccbMember->setPosition(Vec2(0, 0));
    this->setContentSize(m_ccbMember->getContentSize());
    //fill border
    this->addChild(m_ccbMember);

    CC_SAFE_DELETE(m_ccbReader);
}

void FollowerProperty::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
// end control call back

// menu call back   here ;
void FollowerProperty::selector_back(cocos2d::Ref* pSender)
{
	//do what you want here
}
void FollowerProperty::selector_weapon(cocos2d::Ref* pSender)
{
	//do what you want here
}
void FollowerProperty::selector_armor(cocos2d::Ref* pSender)
{
	//do what you want here
}
void FollowerProperty::selector_trump(cocos2d::Ref* pSender)
{
	//do what you want here
}
void FollowerProperty::selector_necklace(cocos2d::Ref* pSender)
{
	//do what you want here
}
void FollowerProperty::selector_ring(cocos2d::Ref* pSender)
{
	//do what you want here
}
// end menu call back

