// win32.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "gameManager.h"

int _tmain(int argc, _TCHAR* argv[])
{
	auto m_gameManager = gameManager::getInstance();
	m_gameManager->sayHello();

	gameManager::getInstance()->sayHello();

	while (true) {
		if (!m_gameManager->gameLoop()) break;
	}

	return 0;
}

