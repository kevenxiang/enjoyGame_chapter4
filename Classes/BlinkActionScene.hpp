//
//  BlinkActionScene.hpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/23.
//
//

#ifndef BlinkActionScene_hpp
#define BlinkActionScene_hpp

#include <stdio.h>
#include "cocos2d.h"

class BlinkActionScene : public cocos2d::Layer {
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(BlinkActionScene);
};

#endif /* BlinkActionScene_hpp */
