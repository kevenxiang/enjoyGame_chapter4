//
//  RepeatForeverScene.hpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/23.
//
//

#ifndef RepeatForeverScene_hpp
#define RepeatForeverScene_hpp

#include <stdio.h>
#include "cocos2d.h"

using namespace cocos2d;

class RepeatForeverScene : public Layer {
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(RepeatForeverScene);

};

#endif /* RepeatForeverScene_hpp */
