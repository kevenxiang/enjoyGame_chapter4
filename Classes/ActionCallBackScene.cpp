//
//  ActionCallBackScene.cpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/25.
//
//

#include "ActionCallBackScene.hpp"
USING_NS_CC;

Scene *ActionCallBackScene::createScene() {
    auto scene = Scene::create();
    
    auto layer = ActionCallBackScene::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool ActionCallBackScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    auto sprite = Sprite::create("sprite.png");
    sprite->setPosition(Point(visibleSize.width/2, visibleSize.height/2));
    this->addChild(sprite);
    
    //移动动作，10秒钟的时间
    auto moveToHome = MoveTo::create(10.0f, Point(visibleSize.width, visibleSize.height/2));
    //回调对象，CallFunc也是一个动作，只不过这个动作是回调一个函数
    auto callbackFunc = [&](){
        backHome();
    };
    CallFunc *callFunc = CallFunc::create(callbackFunc);
    
    //组合两个动作
    auto actions = Sequence::create(moveToHome, callFunc,  NULL);
    
    //执行动作
    sprite->runAction(actions);
    
    return true;
}

void ActionCallBackScene::backHome() {
    Size visibleSize = Director::getInstance()->getVisibleSize();
    auto label = Label::createWithTTF("I am home!", "fonts/Marker Felt.ttf", 35);
    label->setPosition(Point(visibleSize.width/2, visibleSize.height/2));
    this->addChild(label);
}




















