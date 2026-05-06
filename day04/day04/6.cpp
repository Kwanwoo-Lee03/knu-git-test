#include<iostream>
using namespace std; 

int main() {

	int* p = new int;	// int 타입 한개 할당 
	// 앞에서 포인터 변수에 주소를 대입한 것처럼 이것도 할당받은 메모리 공간의 주소를 넣어주는 것 
	if (!p) {	// 공간이 있는지 없는지 확인하는 코드 - 메모리가 부족하면 !p가 true가 된다. 
		cout << "메모리를 할당할 수 없음";
		return 0; 
	}
	*p = 5; // 할당 받은 정수 공간에 5삽입 
	int n = *p; 
	cout << "*p = " << *p << endl; 
	cout << "n = " << n << endl;

	delete p; // 할당 받은 메모리 반환
}