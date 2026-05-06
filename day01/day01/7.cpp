#include<iostream>
using namespace std; 

int addr(int a, int b) {
	int sum = a + b; 
	return sum;
}
{
	int n = addr(24567, 98734);
	cout << "두 수의 합은" << n << "입니다\n";

	int a, b; 
	cout << "두개의 정수를 입력하세요 >>";
	cin >> a >> b; 
	n = addr(a, b);
	cout << "두 수의 합은" << n << "입니다\n";
}