#include<iostream>
using namespace std;

class Rect; 

class RectManager {
public:
	bool equals(Rect r, Rect s);
};

class Rect {
	int width, height; 
public:
	Rect(int width, int height) { this->width = width, this->height = height; }
	friend bool RectManager::equals(Rect r, Rect s);  // RectManager 클래스의 equals 함수에게 friend 부여
};

bool RectManager::equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == r.width) return true;
	else return false;
}

int main() {
	Rect a(3, 4), b(3, 4);
	RectManager man;

	if (man.equals(a, b)) cout << "equals" << endl;
	else cout << "not equal" << endl;
}