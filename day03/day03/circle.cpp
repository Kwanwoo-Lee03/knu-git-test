#include <iostream>
#include "circle.h"
using namespace std; 

Circle::Circle() {
	radius = 1; 
	cout << "반지름" << radius << "원 생성";
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름" << radius << "원 생성";
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}