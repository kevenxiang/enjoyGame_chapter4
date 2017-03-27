//
//  BlinkActionScene.cpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/23.
//
//

#include "BlinkActionScene.hpp"

USING_NS_CC;

Scene *BlinkActionScene::createScene() {
    auto scene = Scene::create();
    
    auto layer = BlinkActionScene::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool BlinkActionScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    //创建一个精灵
    auto sprite = Sprite::create("sprite.png");
    sprite->setPosition(Vec2(visibleSize.width/2, visibleSize.height/2));
    this->addChild(sprite);
    
    //创建Blink动作对象
    Blink *blink = Blink::create(3.0f, 3);
    
    //精灵执行动作
    sprite->runAction(blink);
    
    return true;
}




















