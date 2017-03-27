//
//  BezierActionScene.hpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/23.
//
//

#ifndef BezierActionScene_hpp
#define BezierActionScene_hpp

#include <stdio.h>
#include "cocos2d.h"

#define TAG_SPRITE   1

class BezierActionScene : public cocos2d::Layer {
public:
    
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(BezierActionScene);
    
    virtual void update(float delta);
    
};


#endif /* BezierActionScene_hpp */
