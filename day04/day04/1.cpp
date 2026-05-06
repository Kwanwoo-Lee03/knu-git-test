#include<iostream>

using namespace std;

class Subject {
	int korean = 0, english = 0;
public:
	void setter(int a, int b);
	int get_korean() { return korean; }
	int get_english() { return english; }
};

void Subject::setter(int a, int b) {
	korean = a; 
	english = b;
}

double korAverage(Subject s[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += s[i].get_korean();
	}
	return sum / size;
}

int main() {
	Subject s[3];

	for (int i = 0; i < 3; i++) {

		int a = 0, b = 0;	// 국어, 영어 과목 점수
		cout << "과목 점수 입력 >> ";
		cin >> a >> b;

		s[i].setter(a, b);
	}
	cout << endl;
	cout << "국어 과목의 점수 합계 >>" << s[0].get_korean() + s[1].get_korean() + s[2].get_korean() << endl;
	cout << "국어 과목의 점수 평균 >>" << korAverage(s, 3);

}

// c++에서 배열의 길이를 알려주는 함수는 없다
// int length = sizeof(arr) / sizeof(arr[0])  