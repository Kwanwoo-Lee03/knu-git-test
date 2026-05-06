#include<iostream>
using namespace std; 

class Rect; 

class RectManager {
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& dest, Rect& src);  // 
};

class Rect {
	int width, height; 
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend RectManager;
};

bool RectManager::equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height) return true;
	else return false; 
}

void RectManager::copy(Rect& dest, Rect& src) { // 매개변수로 객체 참조변수를 활용함 ( 참조변수 - 분신의 기능. 주소동일한 값 )
	dest.width = src.width; 
	dest.height = src.height;
}

int main() {
	Rect a(3, 4), b(5, 6);
	RectManager man;

	man.copy(b, a);
	if (man.equals(a, b)) cout << "equals";
	else cout << "not equal" << endl;
}