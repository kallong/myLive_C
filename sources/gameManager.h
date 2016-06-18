//
//  gameManager.h
//  mylive_C
//
//  Created by 牟廷方 on 16/6/18.
//  Copyright © 2016年 牟廷方. All rights reserved.
//

#ifndef gameManager_h
#define gameManager_h

#include <iostream>

class gameManager {
    
public:
    static gameManager* getInstance();
    gameManager();
    bool init();
    void sayHello();
};

#endif /* gameManager_h */
