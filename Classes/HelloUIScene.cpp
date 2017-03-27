//
//  HelloUI.cpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/23.
//
//

#include "HelloUIScene.hpp"

USING_NS_CC;

Scene *HelloUIScene::createScene() {
    auto scene = Scene::create();
    
    auto layer = HelloUIScene::create();
    
    scene->addChild(layer);
    
    return scene;
}

bool HelloUIScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    //加载UI
    auto UI = cocostudio::GUIReader::getInstance()->widgetFromJsonFile("HelloUI_1.ExportJson");
    UI->setPosition(Vec2(100, 100));
    this->addChild(UI);
    
    //获取控件对象
    Button *xiaoruoBtn = (Button *)Helper::seekWidgetByName(UI, "xiaoruoBtn");
    m_xiaoruoImg = (ImageView *)Helper::seekWidgetByName(UI, "xiaoruoImg");
    
    //添加按钮点击监听
    xiaoruoBtn->addTouchEventListener(this, toucheventselector(HelloUIScene::onClick));
    
    return true;
}

void HelloUIScene::onClick(cocos2d::Ref *, TouchEventType type) {
    switch (type) {
        case cocos2d::ui::TOUCH_EVENT_BEGAN://点击事件开始时触发（也就是按下的时候）
            
            break;
        case cocos2d::ui::TOUCH_EVENT_MOVED://按下之后，进行移动操作时触发
            break;
            
        case cocos2d::ui::TOUCH_EVENT_ENDED://按下之后，然后松开时触发
            if (m_xiaoruoImg->isVisible()) {
                m_xiaoruoImg->setVisible(false);
            } else {
                m_xiaoruoImg->setVisible(true);
            }
            break;
        case cocos2d::ui::TOUCH_EVENT_CANCELED://因为一些特殊情况而中断点击事件时触发
            break;
            
        default:
            break;
    }
}






















