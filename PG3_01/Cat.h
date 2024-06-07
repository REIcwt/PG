#pragma once
#include "animal.h"

class Cat :public Animal {
public:
	Cat();
	~Cat();

	void Name() override;
};