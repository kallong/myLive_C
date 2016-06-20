//
//  gameManager.h
//  mylive_C
//
//  Created by 牟廷方 on 16/6/18.
//  Copyright © 2016年 牟廷方. All rights reserved.
//

#ifndef gameManager_h
#define gameManager_h

#include "baseHeader.h"
#include <assert.h>


class gameManager {
    
private:
    bool m_running;
    unsigned int loopCount;
	controlManager *m_controlManager;

public:
    static gameManager* getInstance();
    gameManager();
    ~gameManager();
    bool init();
    bool gameLoop();
    void quit();
    void sayHello();
};

#endif /* gameManager_h */
