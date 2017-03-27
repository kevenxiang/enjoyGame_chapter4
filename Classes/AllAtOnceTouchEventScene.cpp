//
//  AllAtOnceTouchEventScene.cpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/27.
//
//

#include "AllAtOnceTouchEventScene.hpp"

USING_NS_CC;

Scene *AllAtOnceTouchEventScene::createScene() {
    auto scene = Scene::create();
    
    auto layer = AllAtOnceTouchEventScene::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool AllAtOnceTouchEventScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    auto logText1 = Label::createWithTTF("", "fonts/Marker Felt.ttf", 24);
    logText1->setPosition(Point(100, 280));
    this->addChild(logText1, 1, 1);
    
    auto logText2 = Label::createWithTTF("", "fonts/Marker Felt.ttf", 24);
    logText2->setPosition(Point(100, 200));
    this->addChild(logText2, 1, 2);
    
    auto logText3 = Label::createWithTTF("", "fonts/Marker Felt.ttf", 24);
    logText3->setPosition(Point(100, 100));
    this->addChild(logText3, 1, 3);
    
    auto listener = EventListenerTouchAllAtOnce::create();
    
    listener->onTouchesBegan = [&](const std::vector<Touch *>& touches, Event *event) {
        auto logText = (Label *)this->getChildByTag(1);
        int num = (int)touches.size();
        logText->setString(Value(num).asString()+" Touches:");
    };
    
    listener->onTouchesMoved = [&](const std::vector<Touch *>& touches, Event *event) {
        auto logText = (Label *)this->getChildByTag(2);
        int num = (int)touches.size();
        std::string text = Value(num).asString()+" Touches:";
        for(auto &touch : touches) {
            auto location = touch->getLocation();
            text += "[touchID" + Value(touch->getID()).asString() + "],";
        }
        logText->setString(text);
    };
    
    listener->onTouchesEnded = [&](const std::vector<Touch *>& touches, Event *event) {
        auto logText = (Label *)this->getChildByTag(3);
        int num = (int)touches.size();
        logText->setString(Value(num).asString() + " Touches:");
    };
    
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);
    
    return true;
}


















