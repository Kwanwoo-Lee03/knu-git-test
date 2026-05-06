#include<iostream>
using namespace std; 

// 프렌드 함수 : 클래스의 멤버가 아닌 외부 함수 
// - 전역 함수, 다른 클래스의 멤버 함수

// 클래스의 모든 멤버를 접근할 수 있는 권한 부여 
// friend로 선언된 경우에만 예외적으로 private, protected의 멤버에 모든 접근할 수 있는 권한이 주어진다
// 프랜드 함수 자체는 해당 클래스 밖에 있지만, 해당 클래스 내부의 모든 멤버에 접근 가능하다.


class Rect;
bool equals(Rect r, Rect s); // equals() 함수 선언 

class Rect {
	int width, height; 
public:
	Rect(int width, int height) { this->width = width; this->height = height; }	// Rect 클래스 생성자
	friend bool equals(Rect r, Rect s);   // equals 함수를 프랜드로 선언 
};

bool equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height) return true;	// equals 함수가 Rect의 private 멤버에 접근 가능 (클래스 외부임에도 예외)
	else return false;
}

int main() {
	Rect a(3, 4), b(4, 5);
	if (equals(a, b)) cout << "equals" << endl;
	else cout << "not equal" << endl;
}