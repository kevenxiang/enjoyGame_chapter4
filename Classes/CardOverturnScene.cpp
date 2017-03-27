//
//  CardOverturnScene.cpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/23.
//
//

#include "CardOverturnScene.hpp"

USING_NS_CC;

Scene *CardOverturnScene::createScene() {
    auto scene = Scene::create();
    
    auto layer = CardOverturnScene::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool CardOverturnScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    //创建第一个精灵
    auto sprite1 = Sprite::create("sprite1.png");
    sprite1->setPosition(Vec2(visibleSize.width/2, visibleSize.height/2));
    this->addChild(sprite1);
    
    //创建第二个精灵
    auto sprite2 = Sprite::create("sprite2.png");
    sprite2->setPosition(Vec2(visibleSize.width/2, visibleSize.height/2));
    //第二个精灵默认x拉伸至0.01，于是第二个精灵在一开始时看不见的（因为已经缩成比一条像还细了）
    sprite2->setScaleX(0.01f);
    this->addChild(sprite2);
    
    //x方向拉伸至0的动作
    auto scaleToHide = ScaleTo::create(1.2f, 0.0f, 1.0f);
    
    //创建系统动作，监听动作结束事件
    auto sequence = Sequence::create(scaleToHide,
                                     CallFunc::create([=](){
        //第一个精灵缩小到0时，第二个精灵开始x方向的放大
        auto scaleToShow = ScaleTo::create(1.0f, 1.0f, 1.0f);
        
        //精灵执行动作
        sprite2->runAction(scaleToShow);
    })
                                     , NULL);
    //第一个精灵开始在x方向缩小
    sprite1->runAction(sequence);
    
    return true;
}




















