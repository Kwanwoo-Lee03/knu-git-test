#include<iostream>
using namespace std;

// 객체 배열 초기화 
//Circle circleArray[3] = { Circle(10), Circle(20), Circle() }; 
// -> 각각의 배열 객체 마다 다른 생성자, 값을 부여하는 방법

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle circleArray[3] = { Circle(10), Circle(20), Circle() }; 
	// Circle 배열 초기화 -> 일반적으로 배열에 값을 넣을때 {}안에 넣는 것과 동일

	for (int i = 0; i < 3; i++) {
		cout << "Circle" << i << "의 면적은" << circleArray[i].getArea() << endl; 
	}
}
