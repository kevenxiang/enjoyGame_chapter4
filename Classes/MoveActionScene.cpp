//
//  MoveActionScene.cpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/22.
//
//

#include "MoveActionScene.hpp"

USING_NS_CC;

Scene *MoveActionScene::createScene() {
    
    auto scene = Scene::create();
    
    auto layer = MoveActionScene::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool MoveActionScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    //创建一个精灵
    Sprite *xiaoRuo = Sprite::create("sprite.png");
    xiaoRuo->setPosition(Vec2(50, visibleSize.height/2));
    this->addChild(xiaoRuo);
    
    //创建MoveTo动作对象
    MoveTo *moveTo = MoveTo::create(0.9f, Vec2(250, 150));
    
    //精灵执行动作
    xiaoRuo->runAction(moveTo);
    
    return true;
}



































