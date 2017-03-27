//
//  BezierActionScene.cpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/23.
//
//

#include "BezierActionScene.hpp"

USING_NS_CC;

Scene *BezierActionScene::createScene() {
    
    auto scene = Scene::create();
    
    auto layer = BezierActionScene::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool BezierActionScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    //创建精灵
    auto sprite = Sprite::create("sprite.png");
    sprite->setPosition(Vec2(50, 180));
    this->addChild(sprite, 1, TAG_SPRITE);
    
    //创建贝塞尔曲线的配置
    ccBezierConfig bezier;
    bezier.controlPoint_1 = Point(100, 0); //波谷偏向值
    bezier.controlPoint_2 = Point(200, 250); //波峰偏向值
    bezier.endPosition = Point(300, 0);  //动作终点
    
    //创建动作对象
    auto bezierTo = BezierTo::create(4.0f, bezier);
    auto bezierBy = BezierBy::create(4.0f, bezier);
    
//    sprite->runAction(bezierBy);
    sprite->runAction(bezierTo);

    
    this->scheduleUpdate();
    
    
    return true;
}

void BezierActionScene::update(float delta) {
    
    auto sprite = (Sprite *)this->getChildByTag(TAG_SPRITE);
    auto pos = sprite->getPosition();
    
    auto pSptite = Sprite::create("point.png");
    pSptite->setPosition(pos);
    this->addChild(pSptite);
}



























