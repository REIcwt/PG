#include<algorithm>
#include<stdio.h>
#include"Enemy.h"
#include <windows.h>

int main() {

	Enemy enemy;

	for (int i = 0; i < 3; ++i) {
		enemy.Update();
		Sleep(700);
	}

	return 0;
}