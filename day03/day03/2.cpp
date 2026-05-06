#include<iostream>
using namespace std;

#include "circle.h"

int main() {
	Circle donut; // 객체 생성
	double area = donut.getArea();
	cout << "donut의 면적은 " << area << "\n";
	
	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza의 면적은 " << area << endl; 
}