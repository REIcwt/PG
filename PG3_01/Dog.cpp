#include <iostream>
#include "Dog.h"

Dog::Dog() : Animal("Dog") {

}

Dog::~Dog(){

}

void Dog::Name() {
	std::cout << "Animal Name: " << name << std::endl;
}
