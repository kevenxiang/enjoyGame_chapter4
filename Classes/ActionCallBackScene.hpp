//
//  ActionCallBackScene.hpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/25.
//
//

#ifndef ActionCallBackScene_hpp
#define ActionCallBackScene_hpp

#include <stdio.h>
#include "cocos2d.h"

class ActionCallBackScene : public cocos2d::Layer {
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(ActionCallBackScene);
    
    void backHome();

};

#endif /* ActionCallBackScene_hpp */
