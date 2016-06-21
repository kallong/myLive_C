//
//  baseObject.h
//  mylive_C
//
//  Created by 牟廷方 on 16/6/20.
//  Copyright © 2016年 牟廷方. All rights reserved.
//

#ifndef baseObject_h
#define baseObject_h

#include "baseHeader.h"

class baseObject {
private:
	baseObject* m_parent;
	std::vector<baseObject*> m_children;
protected:
	unsigned int m_retainCount;

public:
	unsigned int m_ID;

public:
    baseObject();
    ~baseObject();
	void retain();
	void release();
	virtual void update() {};
};

#endif /* baseObject_h */
