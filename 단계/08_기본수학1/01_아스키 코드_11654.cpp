
//시간 초과 풀이
#include <iostream>
#include <string>
using namespace std;

int main() {

	double A, B, C; //A:고정비용, B:가변비용, C:노트북 가격
	cin >> A >> B >> C; //21억 이하의 자연수

	int i = 0;

	if (B >= C) {
		cout << -1;
		return 0;
	}	
	else {
		while (1) { //무한루프를 쓰면 
			if (A + (B * i) < C * i) {
				cout << i;
				return 0;
			}
			i++;
		}
	}
}
