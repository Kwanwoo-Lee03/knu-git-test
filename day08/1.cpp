#include <iostream>
#include <string>
using namespace std;

// 2차원 평면에서 한 점을 표현하는 클래스 point 선언
class Point {
	int x, y; 
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

// public, private, protected 등 상속 접근도 지정 가능.

// public 상속 
// 부모의 public : 자식에서도 public 
// 부모의 protected : 자식에서도 protected
// 부모의 private : 접근 불가 ( 자식에서도 접근 할수 없다 )

// protected 상속 
// 부모의 public : 자식에서는 protected
// 부모의 protected : 자식에서도 protected
// 부모의 private : 접근 불가

// private 상속 
// 부모의 public : 자식에서는 private 
// 부모의 protected : 자식에서는 private 
// 부모의 private : 접근 불가

/// 자식에서는 private -> 자식에서는 사용가능하지만, 자식을 통해 외부에서 접근할 수는 없다. 
// 즉 부모의 것을 자식 객체를 통해 외부에서 어디까지 접근 가능한지를 설정

class ColorPoint : public Point { // 2차원 평면에서 컬러점을 표현하는 클래스. 
	string color; 
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint();  // point의 showPoint() 호출
}

int main() {
	Point p; // 기본클래스의 객체 생성
	ColorPoint cp; // 파생클래스의 객체 생성
	cp.set(3, 4); // 파생 클래스의 객체로 기본 클래스의 멤버 호출
	cp.setColor("Red"); 
	cp.showColorPoint(); 
}




// 새로운 컴퓨터에 폴더가 없을 때 - github의 clone    
// github에 있는 파일들이 그대로 폴더로 만들어짐