#pragma once

#include "cocos2d.h"

class Ball : public cocos2d::Sprite
{
public:
	static Ball* createBall(const char* filename);
	int type; // ����
	bool existence; //�Ƿ����
	int speedX;
	int speedY;
};