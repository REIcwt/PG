#include <iostream>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {
  
    IShape* ishape[3];
	for (int i = 0; i < 2; i++) {
		if (i < 1)
			ishape[i] = new Circle;
		else
			ishape[i] = new Rectangle;
	}

	for (int i = 0; i < 2; i++) {
		ishape[i]->Draw();
	}

	for (int i = 0; i < 2; i++) {
		delete ishape[i];
	}

    return 0;
}
