#include<iostream>
using namespace std;

class Building {
public:
	int garo;
	int sero;
	int height; 
	int volumn();

};

int Building::volumn(){
	return garo * sero * height;
}

int main() {
	Building tmp;
	tmp.garo = 3; 
	tmp.sero = 5;
	tmp.height = 6; 
	cout << "건물의 체적 : " << tmp.volumn() << endl;

	cout << "최고층을 입력 >> ";
	cin >> tmp.height;
	cout << "건물의 체적 : " << tmp.volumn();


}