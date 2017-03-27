//
//  HelloUI.hpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/23.
//
//

#ifndef HelloUI_hpp
#define HelloUI_hpp

#include <stdio.h>
#include "cocos2d.h"
#include "editor-support/cocostudio/CCSGUIReader.h"
#include "ui/CocosGUI.h"

using namespace cocos2d::ui;
using namespace cocostudio;

class HelloUIScene : public cocos2d::Layer {
public:
    static cocos2d::Scene *createScene();
    virtual bool init();
    CREATE_FUNC(HelloUIScene);
    
private:
    void onClick(Ref *, TouchEventType type);
    ImageView *m_xiaoruoImg;
};


#endif /* HelloUI_hpp */
