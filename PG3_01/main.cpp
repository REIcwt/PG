#include <iostream>
#include "animal.h"
#include "Dog.h"
#include "Cat.h"

int main() {
	//creat
	Animal* animal[3];

	for (int i = 0; i < 2; i++) {
		if (i < 1)
			animal[i] = new Dog;
		else
			animal[i] = new Cat;
	}

	//call out the name
	for (int i = 0; i < 2; i++) {
		animal[i]->Name();
	}
	//del
	for (int i = 0; i < 2; i++) {
		delete animal[i];
	}

	return 0;
}
