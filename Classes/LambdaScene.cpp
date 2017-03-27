//
//  LambdaScene.cpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/25.
//
//

#include "LambdaScene.hpp"

USING_NS_CC;

Scene *LambdaScene::createScene() {
    auto scene = Scene::create();
    
    auto layer = LambdaScene::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool LambdaScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    /*
    auto func = [](){
        log("Normal");
    };
    CallFunc *callFunc = CallFunc::create(func);
    //执行动作
    this->runAction(callFunc);
     */
    
    
    /*
    auto func = [&](){
        auto sprite = Sprite::create("sprite.png");
        sprite->setPosition(Point(200, 200));
        this->addChild(sprite);
    };
    CallFunc *callFunc = CallFunc::create(func);
    this->runAction(callFunc);
     */
    
    
    /*
    auto sprite = Sprite::create("sprite.png");
    sprite->setPosition(Point(200, 200));
    this->addChild(sprite);
    
    auto func = [=](){
        sprite->setScale(2);
    };
    CallFunc *callFunc = CallFunc::create(func);
    this->runAction(callFunc);
     */
    
    
    
    CallFunc *callFunc = CallFunc::create([](){
        log("=============lambda");
    });
    this->runAction(callFunc);
    
    return true;
}



























