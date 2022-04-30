/*
문제
어느 날, 미르코는 우연히 길거리에서 양수 N을 보았다. 미르코는 30이란 수를 존경하기 때문에, 그는 길거리에서 찾은 수에 포함된 숫자들을 섞어 30의 배수가 되는 가장 큰 수를 만들고 싶어한다.

미르코를 도와 그가 만들고 싶어하는 수를 계산하는 프로그램을 작성하라.

입력
N을 입력받는다. N는 최대 105개의 숫자로 구성되어 있으며, 0으로 시작하지 않는다.

출력
미르코가 만들고 싶어하는 수가 존재한다면 그 수를 출력하라. 그 수가 존재하지 않는다면, -1을 출력하라.
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	string s;
	cin >> s;

	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		sum = sum + s[i] - '0';//문자 1개를 정수로
	}
	
	sort(s.begin(), s.end(), greater<>());//내림 차순 정렬

	//끝자리 수가 0이 아니거나 각자리 숫자들의 합이 3의배수가 아니면
	if (s[s.size() - 1] != '0' || sum % 3 != 0)	cout << -1;
	else cout << s;


}

//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s;
	cin >> s;

	vector<char> v;
	for (long long i = 0; i < s.length(); i++)
		v.push_back(s[i]);

	sort(v.begin(), v.end(), greater<>());

	string sum;
	for (long long i = 0; i < v.size(); i++)
		sum = sum + v[i];

	long long cnt;
	long long ans;
	for (long long i = stoi(sum); i >= 1; i--) {
		cnt = 0;
		if (i % 30 == 0) {
			for (long long j = 0; j < v.size(); j++) {
				if (to_string(i).find(v[j]) != string::npos) {
					cnt++;
				}
			}		
			if (cnt == v.size()) {
				ans = i;
				break;		
			}
		}
	}
	if (cnt == 0)
		cout << -1;
	else
		cout << ans;


}

