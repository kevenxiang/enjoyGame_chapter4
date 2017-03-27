//
//  CardOverturnScene.hpp
//  enjoyGame_chapter4
//
//  Created by xiang on 2017/3/23.
//
//

#ifndef CardOverturnScene_hpp
#define CardOverturnScene_hpp

#include <stdio.h>
#include "cocos2d.h"

class CardOverturnScene : public cocos2d::Layer {
public:
    static cocos2d::Scene *createScene();
    
    virtual bool init();
    
    CREATE_FUNC(CardOverturnScene);
};


#endif /* CardOverturnScene_hpp */
