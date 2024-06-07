#include <iostream>
#include "Cat.h"

Cat::Cat() : Animal("Cat") {

}

Cat::~Cat() {

}

void Cat::Name() {
	std::cout << "Animal Name: " << name << std::endl;
}
