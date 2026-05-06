#include <iostream>
#include <string>
using namespace std; 

int main() {
	int cnt;
	cout << "횟수를 입력하세요 >> ";
	cin >> cnt; 

	for (int i = 5; i >= 1; i--) {
		cout << string(i, '*') << '\n';  // string 생성자는 문자를 받아야 한다. 문자열을 넣을 시 오류 발생.
	}
}



