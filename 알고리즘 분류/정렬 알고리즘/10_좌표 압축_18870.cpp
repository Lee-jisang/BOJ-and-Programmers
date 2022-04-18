#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;


	vector<int> v(N);//복사벡터
	vector<int> v2(N);//원본벡터
	int a;
	for (int i = 0; i < N; i++) {
		cin >> a;
		v[i] = a;
		v2[i] = a;

	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());//중복제거

	for (int i = 0; i < v2.size(); i++) {
		/* 시간초과
		for (int j = 0; j < v.size(); j++) {
			if (v2[i] == v[j]) {
				cout << j << " ";
				break;
			}	
		}
		*/
		//시간초과 해결
		// i번째 요소값의 위치 it
		auto it = lower_bound(v.begin(), v.end(), v2[i]);
		// it에서 v벡터의 시작 주소값을 빼준 값이 답
		cout << it - v.begin() << ' ';

	}
}
