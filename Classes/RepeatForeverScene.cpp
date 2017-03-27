//
//  RepeatForeverScene.cpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/23.
//
//

#include "RepeatForeverScene.hpp"

USING_NS_CC;

Scene *RepeatForeverScene::createScene() {
    
    auto scene = Scene::create();
    
    auto layer = RepeatForeverScene::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool RepeatForeverScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    auto sprite = Sprite::create("sprite.png");
    
    sprite->setPosition(Point(visibleSize.width/2, visibleSize.height/2));
    this->addChild(sprite);
    
    auto jumpBy = JumpBy::create(3.0f, Point(50, 1), 100, 1);
    
    auto repeatForeverAction = RepeatForever::create(jumpBy);
    
    //以jumpBy为参数，创建一个指定重复次数的动作
//    Repeat *repeatAction = Repeat::create(jumpBy, 3);
    
    sprite->runAction(repeatForeverAction);
    
    return true;
}
















