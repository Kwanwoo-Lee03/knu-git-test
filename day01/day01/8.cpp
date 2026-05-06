#include<iostream>
using namespace std; 

int bigger(int a, int b) {
	if (a > b) return a; 
	return b;
}

bool divideBy3(int n) {
	if (n % 3 == 0) return true;
	return false;
}

int main() {
	int a, b, n; 
	cout << "두개의 정수 입력 >>";
	cin >> a >> b; 

	n = bigger(a, b);
	cout << a << "중" << b << "중 큰값은" << n << "입니다.\n";

	if (divideBy3(n))
		cout << n << "은" << "3의 배수 입니다\n";
	else
		cout << n << "은" << "3의 배수가 아닙니다\n";
}



