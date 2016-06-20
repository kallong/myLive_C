//
//  controlManager.cpp
//  mylive_C
//
//  Created by 牟廷方 on 16/6/19.
//  Copyright © 2016年 牟廷方. All rights reserved.
//

#include "controlManager.h"
#include "gameManager.h"

static controlManager *m_controlManager = nullptr;

controlManager::controlManager() {
    
}

controlManager::~controlManager() {
    delete m_controlManager;
}

controlManager* controlManager::getInstance() {
    if (!m_controlManager) {
        m_controlManager = new controlManager();
        std::cout << "new gameManager...\n";
        m_controlManager->init();
    }
    return m_controlManager;
}

bool controlManager::init() {
    std::cout << "gameManager init over\n";
    return true;
}

void controlManager::getCmd() {
    std::cin >>m_cmd;
}

bool controlManager::doCMD() {
    if (m_cmd == "quit") {
        gameManager::getInstance()->quit();
    }
    return true;
}

void controlManager::printCmd() {
    std::cout << "please choose:\n";
    std::cout << "\tquit\t:quit game.\n";
}