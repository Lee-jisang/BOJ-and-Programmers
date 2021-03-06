/*
문제
다솜이는 0과 1로만 이루어진 문자열 S를 가지고 있다. 다솜이는 이 문자열 S에 있는 모든 숫자를 전부 같게 만들려고 한다. 다솜이가 할 수 있는 행동은 S에서 연속된 하나 이상의 숫자를 잡고 모두 뒤집는 것이다. 뒤집는 것은 1을 0으로, 0을 1로 바꾸는 것을 의미한다.

예를 들어 S=0001100 일 때,

전체를 뒤집으면 1110011이 된다.
4번째 문자부터 5번째 문자까지 뒤집으면 1111111이 되어서 2번 만에 모두 같은 숫자로 만들 수 있다.
하지만, 처음부터 4번째 문자부터 5번째 문자까지 문자를 뒤집으면 한 번에 0000000이 되어서 1번 만에 모두 같은 숫자로 만들 수 있다.

문자열 S가 주어졌을 때, 다솜이가 해야하는 행동의 최소 횟수를 출력하시오.

입력
첫째 줄에 문자열 S가 주어진다. S의 길이는 100만보다 작다.

출력
첫째 줄에 다솜이가 해야하는 행동의 최소 횟수를 출력한다.
*/

#include<iostream>
#include<string>
using namespace std;

//string 클래스는 문자의 끝에 null문자(‘\0’) 등이 포함되지 않는다.

int main() {
	string s;
	cin >> s;

	int cnt = 0;

	//cout << s[6]; 끝글자에 공백이 포함?

	for (int i = 0; i < s.length(); i++) {
		if (s[i] != s[i + 1]){ //연속된 숫자가 다르면 카운트		
			cnt++;
			if (i + 1 == s.length()) {
				break;
			}

		}		
	}
	cout << cnt/2;
}

#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;

	int cnt = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] != s[i+1])
			cnt++;		
	}

	cout << cnt/2;




}


//0과 1로만 이루어진 숫자 ex)00011100
//최소로 뒤집어서 같은 숫자를 만들어야 됨
//연속된 하나 이상의 숫자를 잡고 모두 뒤집는 것이 포인트

#include<iostream>
#include<string>
using namespace std;

//string 클래스는 문자의 끝에 null문자(‘\0’) 등이 포함되지 않는다.

int main() {
/*
	string s;
	cin >> s;//0과 1로만 이루어진 문자열을 입력받음

	int cnt = 0;

	//cout << s[6]; //끝글자에 NULL이 포함?

	for (int i = 0; i < s.length(); i++) {
		if (s[i] != s[i + 1]) { //연속된 숫자가 다르면 카운트		
			cnt++;
			if (i + 1 == s.length()) {
				break;
			}
			//cnt++;

		}

	}
	//cout << cnt << "\n"; // ex)0001100 -> 2가 아닌 3이 나옴 이유는?
	cout << cnt / 2 << "\n"; //cnt는 int형이므로 2로나눠도 답은 같음
*/	



//이건왜 틀리지?

	string s;
	cin >> s;

	int cnt = 0;

	//cout << s[6]; 끝글자에 공백이 포함?

	for (int i = 0; i < s.length(); i++) {
		if (s[i] != s[i + 1]) { //연속된 숫자가 다르면 카운트		
			//cnt++;
			if (i + 1 == s.length()) {
				break;
			}
			cnt++;  //00000001 일때 끝에 비교를 안해서 1로 나옴

		}

	}
	if (cnt == 1)
		cout << cnt << "\n"; //0000001 인경우 원래는 
	else
		cout << cnt / 2;


}
