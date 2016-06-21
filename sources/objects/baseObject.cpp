//
//  baseObject.cpp
//  mylive_C
//
//  Created by 牟廷方 on 16/6/20.
//  Copyright © 2016年 牟廷方. All rights reserved.
//

#include "objects/baseObject.h"

baseObject::baseObject():
m_retainCount(1)
{
	static unsigned int objectCount = 0;
	m_ID = ++objectCount;
}

baseObject::~baseObject() {
    
}