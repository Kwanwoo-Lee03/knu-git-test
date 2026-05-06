#include<iostream>
#include<cstring> 
using namespace std; 

int main() {
	char line[100];
	cout << "문자열을 입력하세요>>";
	cin.getline(line, 100, '\n');

	int count = 0; 
	int i = 0; 
	while (line[i] != '\0') {
		if (line[i] == 'e') {
			count++; 
		}
		i++;
	}


	cout << "총글자수" << i << ", 문자 e의 갯수는 " << count << "개" << endl;

}
// 시험 가능성

// cstring을 쓰는 이유 - strcmp(비교), strcpy(복사), strlen(길이), strcat(연결) 등의 함수 사용 
// 배열에 문자열을 대입하는 것은 cstring 과 아무 상관이 없다! 
