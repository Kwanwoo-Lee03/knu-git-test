#include<iostream>
using namespace std; 

class Circle {
	public:
		int radius;
		Circle(); // 매개변수 없는 생성자 
		Circle(int r); // 매개변수 있는 생성자
		double getArea();
};

Circle::Circle() {
	radius = 1; 
	cout << "반지름" << radius << "원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r; 
	cout << "반지름" << radius << "원생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}




// 생성자에서 클래스 내부의 함수에 접근 가능하다 
// 그러나 생성자 실행 시점은 객체가 완전히 만들어지기 전의 상태이다 
// 따라서 함수 호출은 가능하지만, 초기화 안된 변수 생성은 위험하다