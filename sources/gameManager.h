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
#include "controlManager.h"
#include "poolManager.h"

class gameManager {
    
private:
    bool m_running;
    unsigned int loopCount;
    unsigned int m_gameStatus;
	controlManager *m_controlManager;
    poolManager *m_poolManager;
    
public:
    static gameManager* getInstance();
    static gameManager* gameInit() {return getInstance();}
    gameManager();
    ~gameManager();
    bool init();
    bool gameLoop();
    void quit();
    void setGameStatus(GS m_type);
    unsigned int getGameStatus();
    void sayHello();
};

#endif /* gameManager_h */
