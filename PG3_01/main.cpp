#include <stdio.h>
#include <iostream>
#include<algorithm>

using namespace std;

template <typename Type1, typename Type2>

class Compare {
public:
	Type1 Min(Type1 a, Type2 b) {
		if (a < b) {
			return a;
		}
		else {
			return b;
		}
	}
};

int main() {

	//1-1
	Compare<int, int> intCompare;
	Compare<float, float> floatCompare;
	Compare<double, double> doubleCompare;

	//1-2
	Compare<int, float> intFloatCompare;
	Compare<int, double> intDoubleCompare;
	Compare<float, double> floatDoubleCompare;


	int a1 = 3, a2 = 5;
	float b1 = 7.3f, b2 = 9.4f;
	double c1 = 10.2, c2 = 12.1;

	//print result
	printf("Min(int : %d, int : %d):\n %d\n", a1, a2, intCompare.Min(a1, a2));
	printf("Min(float : %.2f, float : %.2f):\n %.2f\n", b1, b2, floatCompare.Min(b1, b2));
	printf("Min(double : %.2lf, double : %.2lf):\n %.2lf\n", c1, c2, doubleCompare.Min(c1, c2));

	printf("Min(int : %d, float : %.2f):\n %.2f\n", a1, b1,(float)intFloatCompare.Min(a1, b1));
	printf("Min(float : %.2f, double : %.2f):\n %.2lf\n", b1, c1, (double)intDoubleCompare.Min(b1, c1));
	printf("Min(int : %d, double : %.2f):\n %.2lf\n", a1, c1, (double)floatDoubleCompare.Min(a1, c1));


	return 0;
}