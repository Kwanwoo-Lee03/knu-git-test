#include<iostream>
using namespace std; 

class Circle {
public:
	int radius;

	Circle();
	Circle(int r);
	~Circle(); // 소멸자 - 매개변수도 없고, 리턴 타입도 없다
	double getArea();
};

Circle::Circle() {
	radius = 1; 
	cout << "반지름" << radius << "원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름" << radius << "원 생성" << endl;
}

Circle::~Circle() {		// 소멸자 정의 - 만약 이렇게 정의를 안해주면 기본소멸자 실행
	cout << "반지름" << radius << "원 소멸" << endl;
}

double Circle::getArea() {	
	return 3.14 * radius * radius; 
}

int main() {
	Circle donut; 
	Circle pizza(30);
}





// 객체는 생성의 반대순으로 소멸된다 
// 나중의 것이 이전의 것 위로 쌓이는 느낌