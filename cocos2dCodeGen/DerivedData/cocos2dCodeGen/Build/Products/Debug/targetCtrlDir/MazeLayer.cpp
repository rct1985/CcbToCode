//
//  MazeLayer.cpp
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//  feel free to modify this class
//

#include "MazeLayer.h"
using namespace std;
using namespace cocos2d;
using namespace cocos2d::extension;

MazeLayer::MazeLayer(){
}
MazeLayer::~MazeLayer(){
    CC_SAFE_DELETE(m_ccbReader);
}
bool MazeLayer::init(){
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

void MazeLayer::initCCB(){
    CCNodeLoaderLibrary *lib = CCNodeLoaderLibrary::newDefaultCCNodeLoaderLibrary();
    lib->registerCCNodeLoader("MazeLayer_CCB", MazeLayer_CCB::MazeLayer_CCBLoader::loader());

    //read ccbi file
    m_ccbReader = new CCBReader( lib );
    //m_ccbReader->setResolutionScale(2.0f);
    m_ccbMember = (MazeLayer_CCB*)m_ccbReader->readNodeGraphFromFile("MazeLayer.ccbi", this);

    m_ccbMember->setMazeLayer(this);

    //CCB
    m_ccbMember->setPosition(ccu(0, 0));
    //fill border
    this->addChild(m_ccbMember);
}

void MazeLayer::giveValueToCCB(){
    //do what your want here
}


//control button call back  here ;
// end control call back

// menu call back   here ;
void MazeLayer::clickButton_exit(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void MazeLayer::clickButton_reset(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void MazeLayer::clickButton_explore(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void MazeLayer::clickButton_help(cocos2d::CCObject * pSender)
{
	//do what you want here
}
void MazeLayer::clickButtonForInstruction_exit(cocos2d::CCObject * pSender)
{
	//do what you want here
}
// end menu call back

