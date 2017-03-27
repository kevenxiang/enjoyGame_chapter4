//
//  LambdaScene.hpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/25.
//
//

#ifndef LambdaScene_hpp
#define LambdaScene_hpp

#include <stdio.h>
#include "cocos2d.h"

class LambdaScene : public cocos2d::Layer {
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(LambdaScene);
};

#endif /* LambdaScene_hpp */
