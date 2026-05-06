// 참조변수는 일반 변수(값) 처럼 생각한다. - 절대 주소 아님. 
// 참조변수 = 별명
// 주소를 받지는 않지만 값의 변화를 그대로 따라간다.
// 참조변수를 조작해도 원래의 것도 따라 바뀐다. 

#include<iostream>
using namespace std; 


// 기본 타입 변수에 대한 참조
//int main() {
//	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
//	int i = 1;
//	int n = 2; 
//	int& refn = n; // 참조변수 refn 선언. refn은 n에 대한 별명.
//
//	n = 4; 
//	refn++; // refn = 5, n = 5
//	cout << i << '\t' << n << '\t' << refn << endl; 
//
//	refn = i; // refn = 1, n = 1
//	refn++; // refn = 2, n = 2
//	cout << i << '\t' << n << '\t' << refn << endl; 
//
//	int* p = &refn; // p는 n의 주소를 가짐 
//	*p = 20; // refn = 20, n = 20
//	cout << i << '\t' << n << '\t' << refn << endl;
//}



// 객체에 대한 참조 
class Circle {
	int radius; 
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

int main() {
	Circle circle; 
	Circle &refc = circle;  // circle 객체에 대한 참조변수 refc 선언
	refc.setRadius(10);  // 참조변수(별명)을 통한 객체 내부 접근
	cout << refc.getArea() << " " << circle.getArea(); 
}