#include<iostream>
using namespace std;

// 객체 배열 선언

// 배열의 각 원소  
// 매개변수 있는 생성자를 호출할 수 없다  ex) Circle circleArray[3](5) -> 오류
// 배열의 각 객체마다 소멸자 호출. 생성의 반대순으로 소멸.

// 객체 배열은 기본 생성자를 호출한다! 
// 아무 생성자도 없으면 기본 생성자를 알아서 호출하지만, 매개변수가 있는 생성자가 있을 경우에는 
// 기본 생성자를 따로 만들어주어야 한다 -> 안 만들어주면 오류. 기본 생성자를 스스로 만들지 못함.

class Circle {
	int radius; 
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return radius * 3.14 * 3.14;
}

int main() {
	Circle circleArray[3];

	// 배열의 각 원소 객체의 멤버 접근
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) {
		cout << "Circle" << i << "의 면적은" << circleArray[i].getArea() << endl;
	}

	Circle* p;  // 객체 포인터 선언 - 객체의 주소 저장
	p = circleArray;
	for (int i = 0; i < 3; i++) { // 객체 포인터로 베열 접근
		cout << "Circle" << i << "의 면적은" << p->getArea() << endl;
		p++;  // p++를 통해 주소 증가 가능 -> 주소 증가를 통해 배열의 다음 칸으로 이동!
	}
}

