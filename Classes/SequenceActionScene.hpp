//
//  SequenceActionScene.hpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/25.
//
//

#ifndef SequenceActionScene_hpp
#define SequenceActionScene_hpp

#include <stdio.h>
#include "cocos2d.h"

using namespace cocos2d;

class SequenceActionScene : public cocos2d::Layer {
public:
    static Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(SequenceActionScene);
    
};


#endif /* SequenceActionScene_hpp */
