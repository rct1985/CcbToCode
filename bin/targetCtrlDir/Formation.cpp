//
//  Formation.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//
//  for cocos2dx_3_x

#include "Formation.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;
using namespace cocosbuilder;

Formation::Formation(){
    m_strCCBIFile = "Formation.ccbi";
}
Formation::~Formation(){
    //CC_SAFE_DELETE(m_ccbReader);
}
Formation* Formation::create(string p_strCCBIFile){
    Formation* l_instance = new Formation();
    if(l_instance){
        l_instance->m_strCCBIFile = p_strCCBIFile;
        l_instance->init();
        l_instance->autorelease();
    }
    return l_instance;
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
    NodeLoaderLibrary *lib = NodeLoaderLibrary::getInstance();
    lib->registerNodeLoader("Formation_CCB", Formation_CCB::Formation_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    //m_ccbMember = (Formation_CCB*)m_ccbReader->readNodeGraphFromFile("Formation.ccbi", this);
    m_ccbMember = (Formation_CCB*)m_ccbReader->readNodeGraphFromFile(m_strCCBIFile.c_str(), this);

    m_ccbMember->setFormation(this);

    //CCB
    m_ccbMember->setPosition(Vec2(0, 0));
    this->setContentSize(m_ccbMember->getContentSize());
    //fill border
    this->addChild(m_ccbMember);

    CC_SAFE_DELETE(m_ccbReader);
}

void Formation::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
void Formation::selector_back(Ref* pSender)
{
	//do what you want here
}
void Formation::selector_quickGroup(Ref* pSender)
{
	//do what you want here
}
void Formation::selector_showGroupList(Ref* pSender)
{
	//do what you want here
}
void Formation::selector_showGroupDetail(Ref* pSender)
{
	//do what you want here
}
// end control call back

// menu call back   here ;
void Formation::selector_showCard(cocos2d::Ref* pSender)
{
	//do what you want here
}
// end menu call back

