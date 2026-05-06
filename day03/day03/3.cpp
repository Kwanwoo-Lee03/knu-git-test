#include <iostream> 
using namespace std;

// 퀴즈1) 한 사람 분량. -- 함수이용하기, 클래스 이용하기 
// 성적 처리하기 - 국어,영어,수학 점수 총점, 평균 계산하기 

//class Grade {
//	int korean, english, math;
//public:
//	Grade(int k, int e, int m);
//	int sum();
//	int average();
//};
//
//Grade::Grade(int k, int e, int m) {
//	korean = k; english = e; math = m;
//}
//
//int Grade::sum() {
//	return korean + english + math;
//}
//
//int Grade::average() {
//	return sum() / 3;
//}
//
//int main() {
//	Grade d(40, 60, 100);
//	cout << "합계:" << d.sum() << endl;
//	cout << "평균:" << d.average() << endl;
//}


// 퀴즈2) 함수 이용하기, 클래스 이용하기 
// 하나의 반에 10명의 학생이 있다. 1번 처럼 처리하라.
// 과목별 평균
// 개인 등수
// - 창의적으로 정보를 만들어 제공하라

class Grade {
	int korean, english, math;
	//int kor_arr[10], eng_arr[10], math_arr[10];
public:
	int sum();
	int average();
	
	int get_kor() { return korean; }
	int get_eng() { return english;}
	int get_math() { return math; }

	void setter(int k, int e, int m) { korean = k; english = e; math = m; }
	//void set_arr(int i, int k, int e, int m) { kor_arr[i] = k; eng_arr[i] = e; math_arr[i] = m; }
	//void sub_avg();
};

int Grade::sum() {
	return korean + english + math;
}

int Grade::average() {
	return sum() / 3;
}

//void Grade::sub_avg() {
//	int kor_sum = 0, eng_sum = 0, math_sum = 0;
//	for (int i = 0; i < 10; i++) {
//		kor_sum += kor_arr[i];
//		eng_sum += eng_arr[i];
//		math_sum += math_arr[i];
//	}
//	cout << "국어 평균 :" << (double)kor_sum / 10 << "영어 평균 :" << (double)eng_sum / 10 << "수학 평균 :" << (double)math_sum / 10 << endl;
//
//}

int main() {
	Grade d[10];  //  10개의 객체가 담긴 배열을 생성
	for (int i = 0; i < 10; i++) {
		int a, b, c;
		cout << "학생의 점수 입력: ";
		cin >> a >> b >> c;
		d[i].setter(a, b, c);
		//cout << endl;
	}

	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << "학생" << i+1 << "의 합계 :" << d[i].sum() << " 평균 :" << d[i].average() << endl;
	}

	int kor_sum = 0, eng_sum = 0, math_sum = 0;
	for (int i = 0; i < 10; i++) {
		kor_sum += d[i].get_kor();
		eng_sum += d[i].get_eng();
		math_sum += d[i].get_math();
	}
	cout << "국어 평균 :" << (double)kor_sum / 10 << "영어 평균 :" << (double)eng_sum / 10 << "수학 평균 :" << (double)math_sum / 10 << endl;
}

// 바깥의 객체에서는 public에만 접근 가능. private은 불가.