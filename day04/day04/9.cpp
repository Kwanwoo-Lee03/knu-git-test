#include<iostream>
using namespace std;

class Circle {
	int radius; 
public:
	Circle() { radius = 1; }
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }

};

class CircleManager {  // Circle 배열을 관리하는 클래스
	Circle* pArray = NULL;  // 동적 생성한 Circle 배열에 대한 주소 - 이 클래스 내부에서 동적 할당을 받을 것이므로 미리 변수 선언
	int size = 0;
	void input(); // 각 Circle에 반지름 입력
	void decide(); 
public:
	CircleManager();
	~CircleManager();
	void run();  

};

CircleManager::CircleManager() {
	cout << "생성하고자 하는 원의 갯수>>";
	cin >> size; // 원의 갯수 입력 
	if (size <= 0) return; 
	pArray = new Circle[size];  // 객체 배열의 동적 할당 - Circle 클래스의 객체를 가진 배열을 CircleManager 클래스 내부에서 할당

}

CircleManager::~CircleManager() {
	if (pArray != NULL) delete[]pArray;
}

void CircleManager::input() {
	int radius;
	for (int i = 0; i < size; i++) {
		cout << "원" << i + 1 << ": ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}
}

void CircleManager::decide() {
	int count = 0; 
	Circle* p = pArray; 
	for (int i = 0; i < size; i++) {
		cout << p->getArea() << ' ';
		if (p->getArea() >= 100 &&
			p->getArea() <= 200) count++;
		p++; // 다음 원을 위해 포인터 증가 
	}
}

void CircleManager::run() {
	input();
	decide();
}

int main() {
	CircleManager* pMan = new CircleManager();	// CircleManager 객체 동적 할당 
	pMan->run();
	delete pMan;
}