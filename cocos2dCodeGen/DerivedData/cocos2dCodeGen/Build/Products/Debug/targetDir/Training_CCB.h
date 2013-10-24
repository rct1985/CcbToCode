//
//  Training_CCB.h
//  
//
//  this code is auto generate by the tool created by neo. Email andsonliang@gmail.com
//  and improved by TerrenceRao. Email rcttobattle@gmail.com
//

#ifndef __autogen_ccbuilder__Training_CCB__
#define __autogen_ccbuilder__Training_CCB__

#include "cocos2d.h"
#include "cocos-ext.h"

class Training;

class Training_CCB
:public cocos2d::CCLayer
, public cocos2d::extension::CCBSelectorResolver
, public cocos2d::extension::CCBMemberVariableAssigner
, public cocos2d::extension::CCNodeLoaderListener

{
public:
    Training_CCB()
    :CCLayer()

	,m_trainingMenu(0)
	,m_trainingTypeSingleFree(0)
	,m_trainingTypeSingle(0)
	,m_trainingTypeMultiFree(0)
	,m_trainingTypeMulti(0)
	,m_faithPoint(0)
	,m_trainingTimes(0)
	,m_headImage(0)
	,m_name(0)
	,m_faction(0)
	,m_level(0)
	,m_power(0)
	,m_health(0)
	,m_attack(0)
	,m_magic(0)
	,m_defence(0)
	,m_resistance(0)
	,m_resetButton(0)
	,m_backButton(0)
	,m_speed(0)
	,m_resultLayer(0)
	,m_Dhealth(0)
	,m_Dspeed(0)
	,m_Dattack(0)
	,m_Dmagic(0)
	,m_Ddefence(0)
	,m_Dresistance(0)
	,m_acceptMenu(0)
	,m_confirmLayer(0)
	,m_confirmText(0)
{}
CREATE_FUNC(Training_CCB);


//Class Loader , modify it when necessary
class Training_CCBLoader : public cocos2d::extension::CCLayerLoader
{
public:
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(Training_CCBLoader, loader);
protected:
    CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(Training_CCB);
};

//virtual function from base !
protected:
    virtual cocos2d::SEL_MenuHandler onResolveCCBCCMenuItemSelector(cocos2d::CCObject * pTarget, const char * pSelectorName);
    virtual cocos2d::extension::SEL_CCControlHandler onResolveCCBCCControlSelector(cocos2d::CCObject * pTarget, const char * pSelectorName);
    virtual bool onAssignCCBMemberVariable(cocos2d::CCObject * pTarget, const char * pMemberVariableName, cocos2d::CCNode * pNode);
    virtual void onNodeLoaded(cocos2d::CCNode * pNode, cocos2d::extension::CCNodeLoader * pNodeLoader);
    virtual bool onAssignCCBCustomProperty(CCObject* pTarget, const char* pMemberVariableName, cocos2d::extension:: CCBValue* pCCBValue);

 //control call back function;
protected:
	void selector_reset(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);
	void selector_back(CCObject * pSender, cocos2d::extension::CCControlEvent pCCControlEvent);

 // menu call back fuction 
protected:
	void selector_singleFree(cocos2d::CCObject * pSender);
	void selector_single(cocos2d::CCObject * pSender);
	void selector_multiFree(cocos2d::CCObject * pSender);
	void selector_multi(cocos2d::CCObject * pSender);
	void selector_resultAccept(cocos2d::CCObject * pSender);
	void selector_resultRefuse(cocos2d::CCObject * pSender);
	void selector_confirmYES(cocos2d::CCObject * pSender);
	void selector_confirmNO(cocos2d::CCObject * pSender);

 //member will assigned form ccbi file
protected:
	cocos2d::CCMenu*		m_trainingMenu;
	cocos2d::CCMenuItemImage*		m_trainingTypeSingleFree;
	cocos2d::CCMenuItemImage*		m_trainingTypeSingle;
	cocos2d::CCMenuItemImage*		m_trainingTypeMultiFree;
	cocos2d::CCMenuItemImage*		m_trainingTypeMulti;
	cocos2d::CCLabelTTF*		m_faithPoint;
	cocos2d::CCLabelTTF*		m_trainingTimes;
	cocos2d::CCSprite*		m_headImage;
	cocos2d::CCLabelTTF*		m_name;
	cocos2d::CCLabelTTF*		m_faction;
	cocos2d::CCLabelTTF*		m_level;
	cocos2d::CCLabelTTF*		m_power;
	cocos2d::CCLabelTTF*		m_health;
	cocos2d::CCLabelTTF*		m_attack;
	cocos2d::CCLabelTTF*		m_magic;
	cocos2d::CCLabelTTF*		m_defence;
	cocos2d::CCLabelTTF*		m_resistance;
	cocos2d::extension::CCControlButton*		m_resetButton;
	cocos2d::extension::CCControlButton*		m_backButton;
	cocos2d::CCLabelTTF*		m_speed;
	cocos2d::CCLayer*		m_resultLayer;
	cocos2d::CCLabelTTF*		m_Dhealth;
	cocos2d::CCLabelTTF*		m_Dspeed;
	cocos2d::CCLabelTTF*		m_Dattack;
	cocos2d::CCLabelTTF*		m_Dmagic;
	cocos2d::CCLabelTTF*		m_Ddefence;
	cocos2d::CCLabelTTF*		m_Dresistance;
	cocos2d::CCMenu*		m_acceptMenu;
	cocos2d::CCLayerColor*		m_confirmLayer;
	cocos2d::CCLabelTTF*		m_confirmText;

 //member visit function
public:
	inline cocos2d::CCMenu*&		trainingMenu(){ return m_trainingMenu; }
	inline cocos2d::CCMenuItemImage*&		trainingTypeSingleFree(){ return m_trainingTypeSingleFree; }
	inline cocos2d::CCMenuItemImage*&		trainingTypeSingle(){ return m_trainingTypeSingle; }
	inline cocos2d::CCMenuItemImage*&		trainingTypeMultiFree(){ return m_trainingTypeMultiFree; }
	inline cocos2d::CCMenuItemImage*&		trainingTypeMulti(){ return m_trainingTypeMulti; }
	inline cocos2d::CCLabelTTF*&		faithPoint(){ return m_faithPoint; }
	inline cocos2d::CCLabelTTF*&		trainingTimes(){ return m_trainingTimes; }
	inline cocos2d::CCSprite*&		headImage(){ return m_headImage; }
	inline cocos2d::CCLabelTTF*&		name(){ return m_name; }
	inline cocos2d::CCLabelTTF*&		faction(){ return m_faction; }
	inline cocos2d::CCLabelTTF*&		level(){ return m_level; }
	inline cocos2d::CCLabelTTF*&		power(){ return m_power; }
	inline cocos2d::CCLabelTTF*&		health(){ return m_health; }
	inline cocos2d::CCLabelTTF*&		attack(){ return m_attack; }
	inline cocos2d::CCLabelTTF*&		magic(){ return m_magic; }
	inline cocos2d::CCLabelTTF*&		defence(){ return m_defence; }
	inline cocos2d::CCLabelTTF*&		resistance(){ return m_resistance; }
	inline cocos2d::extension::CCControlButton*&		resetButton(){ return m_resetButton; }
	inline cocos2d::extension::CCControlButton*&		backButton(){ return m_backButton; }
	inline cocos2d::CCLabelTTF*&		speed(){ return m_speed; }
	inline cocos2d::CCLayer*&		resultLayer(){ return m_resultLayer; }
	inline cocos2d::CCLabelTTF*&		Dhealth(){ return m_Dhealth; }
	inline cocos2d::CCLabelTTF*&		Dspeed(){ return m_Dspeed; }
	inline cocos2d::CCLabelTTF*&		Dattack(){ return m_Dattack; }
	inline cocos2d::CCLabelTTF*&		Dmagic(){ return m_Dmagic; }
	inline cocos2d::CCLabelTTF*&		Ddefence(){ return m_Ddefence; }
	inline cocos2d::CCLabelTTF*&		Dresistance(){ return m_Dresistance; }
	inline cocos2d::CCMenu*&		acceptMenu(){ return m_acceptMenu; }
	inline cocos2d::CCLayerColor*&		confirmLayer(){ return m_confirmLayer; }
	inline cocos2d::CCLabelTTF*&		confirmText(){ return m_confirmText; }

 //custom member list 
protected:

 //ctrl class 
protected:
	CC_SYNTHESIZE(Training*, m_training, Training);
};
#endif
