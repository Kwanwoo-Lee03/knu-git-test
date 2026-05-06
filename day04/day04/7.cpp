#include<iostream>
using namespace std; 

// 배열의 동적 할당 
// -> int* p = new int[5]      // 배열도 동적으로 할당 받을 수 있다. 

int main() {
	cout << "입력할 정수의 갯수는?"; 
	int n; 
	cin >> n; // 정수의 갯수 입력 
	if (n <= 0) return 0; 

	int* p = new int[n]; // n개의 정수 배열 동적 할당
	if (!p) {	// p가 null값이 아닌 경우 할당 불가
		cout << "메모리를 할당 할수 없다";
		return 0;
	}

	// 배열에 정수 넣기 
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 정수: "; // 프롬프트 출력 
		cin >> p[i]; // 키보드로부터 정수 입력 -> 이렇게 배열에 값을 넣을 수 있음
	}

	int sum = 0; 
	for (int i = 0; i < n; i++) {
		sum += p[i];
	}
	cout << "평균 = " << sum / n << endl; 

	delete[]p;	// 배열 메모리 반환 - [] 가 p 앞에 오는것 기억하기
}