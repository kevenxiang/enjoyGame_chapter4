//
//  SequenceActionScene.cpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/25.
//
//

#include "SequenceActionScene.hpp"

USING_NS_CC;

Scene *SequenceActionScene::createScene() {
    
    auto scene = Scene::create();
    
    auto layer = SequenceActionScene::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool SequenceActionScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    //创建一个精灵
    auto sprite = Sprite::create("sprite.png");
    sprite->setPosition(Point(visibleSize.width/2, visibleSize.height/2));
    this->addChild(sprite);
    
    //创建一个动作对象
    auto moveBy = MoveBy::create(2.2f, Vec2(40, 20));
    //创建一个弹跳动作对象，弹跳高度为100，弹跳次数为5
    auto jumpBy = JumpBy::create(3.0f, Vec2(50, 1), 100, 5);
    //创建一个旋转动作对象
    auto rotateBy = RotateBy::create(2.5f, 220, 10);
    
    //创建组合动作对象，将所有动作连起来
    auto actions = Sequence::create(moveBy, jumpBy, rotateBy, NULL);
    
    sprite->runAction(actions);
    
    return true;
}






















