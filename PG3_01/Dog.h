#pragma once
#include "animal.h"

class Dog :public Animal {
public:
	Dog();
	~Dog();

	void Name() override;
};