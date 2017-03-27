//
//  TouchEventScene.cpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/25.
//
//

#include "TouchEventScene.hpp"

USING_NS_CC;

Scene *TouchEventScene::createScene() {
    auto scene = Scene::create();
    
    auto layer = TouchEventScene::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool TouchEventScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    /*
    auto listener = EventListenerTouchOneByOne::create();
    listener->onTouchBegan = [](Touch *touch, Event *event) {
        Point pos1 = touch->getLocation();//获取单击坐标，基于3D
        Point pos2 = touch->getLocationInView(); //获取单击坐标，基于2D
        Point pos3 = Director::getInstance()->convertToGL(pos2);//获取单击坐标，基于Cocos2d-x
        
        log("触摸开始 pos1 x=%f,y=%f", pos1.x, pos1.y);
        log("触摸开始 pos2 x=%f,y=%f", pos2.x, pos2.y);
        log("触摸开始 pos3 x=%f,y=%f", pos3.x, pos3.y);
        
        return true;
    };
    
    listener->onTouchMoved = [](Touch *touch, Event *event){
        log("触摸移动");
    };
    
    listener->onTouchEnded = [=](Touch *touch, Event *event) {
        log("触摸结束");
    };
    
//    _eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);
     */
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    //创建两个精灵，相互有重叠的部分
    auto sp1 = Sprite::create("sprite1.png");
    sp1->setPosition(Point(visibleSize.width * 0.5f, visibleSize.height * 0.5f));
    this->addChild(sp1);
    
    auto sp2 = Sprite::create("sprite2.png");
    sp2->setPosition(Point(visibleSize.width * 0.5f, visibleSize.height * 0.5f));
    this->addChild(sp2);
    
    auto listener = EventListenerTouchOneByOne::create();
    listener->onTouchBegan = [](Touch *touch, Event *event){
        
        //注册监听事件时绑定了一个Node对象，在这里就可以取出这个对象
        auto target = static_cast<Sprite *>(event->getCurrentTarget());
        
        Point pos = Director::getInstance()->convertToGL(touch->getLocationInView());
        
        //判断单击的坐标是否在精灵的范围内
        if (target->getBoundingBox().containsPoint(pos)) {
            //设置精灵的透明度为100
            target->setOpacity(100);
            
            return true;
        }
        
        return false;
    };
    
    listener->onTouchEnded = [](Touch *touch, Event *event){
        //恢复精灵的透明度
        auto target = static_cast<Sprite *>(event->getCurrentTarget());
        target->setOpacity(255);
    };
    
    
    listener->setSwallowTouches(true);
    //注册监听事件，绑定精灵1
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, sp1);
    
    //注册监听事件，绑定精灵2，这里要注意，listener对象复制了一份
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener->clone(), sp2);
    
    return true;
}



































