//
//  TouchEventScene.hpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/25.
//
//

#ifndef TouchEventScene_hpp
#define TouchEventScene_hpp

#include <stdio.h>
#include "cocos2d.h"

class TouchEventScene : public cocos2d::Layer {
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(TouchEventScene);

};

#endif /* TouchEventScene_hpp */
