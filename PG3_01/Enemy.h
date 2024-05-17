#pragma once
#include <iostream>

enum class State {
	approach,
	shoot,
	leave
};


class Enemy
{
public:
	Enemy();
	~Enemy();

	void Update();

	void approach();

	void shoot();

	void leave();

private:

	State state;
	static void (Enemy::* StateFunction[])();

};
