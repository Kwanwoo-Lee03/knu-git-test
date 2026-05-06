#include<iostream>
#include "Rectangle.h"
using namespace std;

int main() {
	// 객체생성 - 네임스페이스를 명시적으로 호출해줌 (Geometry 네임스페이스안에 있음을 표시)
	Geometry::Rectangle rect(10.5, 5.0);

	// 결과 출력 
	cout << "사각형의 면적: " << rect.getArea() << endl;
}
