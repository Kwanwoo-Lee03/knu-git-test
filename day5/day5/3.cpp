
#include<iostream>
using namespace std;

// quiz_1 (객체 배열 선언후 주소로 전달)

//class Grade {  // 국어, 영어, 수학 클래스
//	int point; // 과목 점수
//public:
//	Grade(int n) { point = n; }
//	int getter() { return point; }
//};
//
//int calTotal(Grade* tmp) {
//	return tmp->getter() + (tmp + 1)->getter() + (tmp + 2)->getter();
//}
//
//int calAvg(Grade* tmp) {
//	return calTotal(tmp) / 3; 
//}
//
//int main() {
//	Grade gg[3] = {Grade(30), Grade(50), Grade(80)};
//	// 객체 배열 선언시 반드시 기본 생성자 호출!! - 명심 ( 아니면 위처럼 괄호에 넣기 )
//	// 객체 배열을 다룰 시에는 항상 기본 생성자를 정의해두는 습관
//	cout << "점수 합계: " << calTotal(gg) << endl;
//	cout << "평균: " << calAvg(gg) << endl;
//
//
//}


// quiz_2 ( 클래스를 직접 전달 ) 
// (Grade g) -> 이 형태로 객체를 전달하면 객체의 복사본이 만들어진다. 실제 객체의 값은 바뀌지 않음.

class Grade {  // 국어, 영어, 수학 클래스 
public:
	int korean;
	int english;
	int math;

	Grade(int a, int b, int c) { korean = a; english = b; math = c; }
};

int calTotal(Grade tmp) {
	return tmp.korean + tmp.english + tmp.math;
}

int calAvg(Grade tmp) {
	return calTotal(tmp) / 3;
}

int main() {
	Grade gg(30, 50, 60); 
	cout << "총합 : " << calTotal(gg) << endl;
	cout << "평균 : " << calAvg(gg) << endl;
}