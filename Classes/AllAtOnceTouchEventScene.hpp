//
//  AllAtOnceTouchEventScene.hpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/27.
//
//

#ifndef AllAtOnceTouchEventScene_hpp
#define AllAtOnceTouchEventScene_hpp

#include <stdio.h>
#include "cocos2d.h"

class AllAtOnceTouchEventScene : cocos2d::Layer {
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(AllAtOnceTouchEventScene);

};


#endif /* AllAtOnceTouchEventScene_hpp */
