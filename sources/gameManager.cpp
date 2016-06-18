//
//  gameManager.cpp
//  mylive_C
//
//  Created by 牟廷方 on 16/6/18.
//  Copyright © 2016年 牟廷方. All rights reserved.
//

#include "gameManager.h"

static gameManager *m_gameManger = nullptr;

gameManager::gameManager() {
    
}

gameManager* gameManager::getInstance() {
    if (!m_gameManger) {
        m_gameManger = new gameManager();
        std::cout << "new gameManager...\n";
        m_gameManger->init();
    }
    return m_gameManger;
}

bool gameManager::init() {
    std::cout << "gameManager init over\n";
    return true;
}

void gameManager::sayHello() {
    std::cout << "gameManager hello~\n";
}
