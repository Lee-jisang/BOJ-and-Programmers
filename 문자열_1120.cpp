/*
문제
길이가 N으로 같은 문자열 X와 Y가 있을 때, 두 문자열 X와 Y의 차이는 X[i] ≠ Y[i]인 i의 개수이다. 예를 들어, X=”jimin”, Y=”minji”이면, 둘의 차이는 4이다.

두 문자열 A와 B가 주어진다. 이때, A의 길이는 B의 길이보다 작거나 같다. 이제 A의 길이가 B의 길이와 같아질 때 까지 다음과 같은 연산을 할 수 있다.

A의 앞에 아무 알파벳이나 추가한다.
A의 뒤에 아무 알파벳이나 추가한다.
이때, A와 B의 길이가 같으면서, A와 B의 차이를 최소로 하는 프로그램을 작성하시오.

입력
첫째 줄에 A와 B가 주어진다. A와 B의 길이는 최대 50이고, A의 길이는 B의 길이보다 작거나 같고, 알파벳 소문자로만 이루어져 있다.

출력
A와 B의 길이가 같으면서, A와 B의 차이를 최소가 되도록 했을 때, 그 차이를 출력하시오.
*/

//모든 경우에 대해서 이중 반복문을 통하여 검사
#include <iostream>
#include <string>
using namespace std;

int main() {
	string A;
	string B;

	cin >> A >> B;
	

	int M = B.length() - A.length();


	int result = 50;
	for (int i = 0; i <M+1; i++) {
		int cnt = 0;

		for (int j = 0; j < A.length(); j++) {
			if(A[j] != B[j + i])
				cnt++;
		}
		result = min(result, cnt);
	}
	cout << result;


}

//모든경우를 대변할 수는 없음 그래서 이풀이는 틀림
#include <iostream>
#include <string>
using namespace std;

int main() {
    string A;
    string B;
    cin >> A >> B;
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;

    string s1 = B.substr(B.length() - A.length());
    string s2 = B.substr(0, B.length() - (B.length() - A.length()));



    if (A.length() == B.length()) {
        for (int i = 0; i < A.length(); i++) {
            if (A[i] != B[i])
                cnt1++;
        }
        cout << cnt1;
    }
    else {//문자열의 길이 다를 때,
        if (B.find(A) / 50 == 0) {
            cout << 0;
        }
        else {
            for (int i = 0; i < A.length(); i++) {
                if (A[i] != s1[i])
                    cnt2++;
            }

            for (int i = 0; i < A.length(); i++) {
                if (A[i] != s2[i])
                    cnt3++;
            }

            if (cnt2 < cnt3)
                cout << cnt2;
            else
                cout << cnt3;
        }

    }

}
