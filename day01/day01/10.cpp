#include<iostream>
using namespace std; 

int main() {
	int n[10];
	int i; 
	int* p; 

	for (int i = 0; i < 10; i++)
		*(n + 1) = i * 3;	// 배열의 이름 n을 주소처럼 사용가능 

	p = n; 
	for (int i = 0; i < 10; i++) {
		cout << *(p + i) << ' ';
	}
	cout << "\n"; 

	for (int i = 0; i < 10; i++) {
		*p = *p + 2; 
		p++;
	}

	for (int i = 0; i < 10; i++) {
		cout << n[i] << ' ';
	}
	cout << "\n"; 

}