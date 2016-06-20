//
//  poolManager.cpp
//  mylive_C
//
//  Created by 牟廷方 on 16/6/20.
//  Copyright © 2016年 牟廷方. All rights reserved.
//

#include "poolManager.h"

static poolManager *m_poolManager = nullptr;

poolManager::poolManager() {
    
}

poolManager::~poolManager() {
    
}

poolManager* poolManager::getInstance() {
    if (!m_poolManager) {
        m_poolManager = new poolManager();
        std::cout << "new poolManager...\n";
        m_poolManager->init();
    }
    return m_poolManager;
}

bool poolManager::init() {
    return true;
}
