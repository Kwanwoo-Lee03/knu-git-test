#include<iostream>
using namespace std;

int main() {
	cout << "너비를 입력하세요>>";

	int width;
	cin >> width; // cin : 키보드 연결하는 입력 스트림 객체 

	cout << "높이를 입력하세요>>";

	int height; 
	cin >> height; 

	int area = width * height; 
	cout << "면적은" << area << "\n";
}

