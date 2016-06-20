//
//  controlManager.h
//  mylive_C
//
//  Created by 牟廷方 on 16/6/19.
//  Copyright © 2016年 牟廷方. All rights reserved.
//

#ifndef controlManager_h
#define controlManager_h

#include "baseHeader.h"

class controlManager {
    
private:
    std::string m_cmd;
    
public:
    static controlManager* getInstance();
    controlManager();
    ~controlManager();
    bool init();
    void getCmd();
    bool doCMD();
    void printCmd();
};

#endif /* controlManager_h */
