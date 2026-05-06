#include<iostream>
using namespace std; 

// 객체 리턴
class Circle {
	int radius; 
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle getCircle() {
	Circle tmp(30);
	return tmp;  // 객체 tmp를 리턴한다 - 객체를 함수내에서도 선언가능
}

int main() {
	Circle c; 
	cout << c.getArea() << endl; 

	c = getCircle();  // tmp 객체의 복사본이 c에 복사된다. c의 radius는 30이 된다.
	cout << c.getArea() << endl;

}