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

gameManager::~gameManager() {
    delete m_gameManger;
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
    m_running = true;
    loopCount = 0;

    m_poolManager = poolManager::getInstance();
	m_controlManager = controlManager::getInstance();

    setGameStatus(GS::GS_NORMAL);
    if (getGameStatus() == GS::GS_FIGHT)
        std::cout << getGameStatus() << std::endl;
    else
        std::cout << "hehe" << std::endl;
    
    std::cout << "gameManager init over\n";
    return true;
}

bool gameManager::gameLoop() {
    m_controlManager->printCmd();
    std::cout << "loop " << loopCount << "\n";
    loopCount++;
    m_controlManager->getCmd();
    bool CMDIsDone = m_controlManager->doCMD();
    if (!CMDIsDone) {
        std::cout << "CMD do fied...\n";
        assert(CMDIsDone);
    }
    if (!m_running) return false;
    return true;
}

void gameManager::quit() {
    m_running = false;
}

void gameManager::setGameStatus(GS m_type) {
    m_gameStatus = (unsigned int)m_type;
}

unsigned int gameManager::getGameStatus() {
    return m_gameStatus;
}

void gameManager::sayHello() {
    std::cout << "gameManager hello~\n";
}
