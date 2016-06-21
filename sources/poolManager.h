//
//  poolManager.h
//  mylive_C
//
//  Created by 牟廷方 on 16/6/20.
//  Copyright © 2016年 牟廷方. All rights reserved.
//

#ifndef poolManager_h
#define poolManager_h

#include "baseHeader.h"
#include "objects/baseObject.h"

class poolManager {
private:
	std::vector<baseObject*> m_poolObjects;
public:
    static poolManager* getInstance();
    poolManager();
    ~poolManager();
    bool init();
};

#endif /* poolManager_h */
