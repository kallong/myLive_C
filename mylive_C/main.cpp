//
//  main.cpp
//  mylive_C
//
//  Created by 牟廷方 on 16/6/18.
//  Copyright © 2016年 牟廷方. All rights reserved.
//

#include <iostream>
#include <unistd.h>
#include "gameManager.h"

void _sleep(float m_time) {
    usleep(m_time *1000000);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    gameManager *m_gameManager = gameManager::getInstance();
    m_gameManager->sayHello();
    
    gameManager::getInstance()->sayHello();
    
    for (int i = 0; i < 10; i++) {
        std::cout << "Hello, World!\n";
        _sleep(0.2);
    }
    return 0;
}
