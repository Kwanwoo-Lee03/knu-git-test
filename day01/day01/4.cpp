#include<iostream>
#include<string>
using namespace std; 

int main() {
	string song("falling in love you");
	string elvis("Elvis Presley");
	string singer; 

	cout << song + "를 부른 가수는";
	cout << "(힌트 : 첫글자는" << elvis[0] << ")";

	getline(cin, singer); // getline은 string 타입의 문자열을 입력받기 위해 제공되는 전역함수
	// 빈칸을 포함하는 문자열 입력기능
}