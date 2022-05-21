#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); //실행속도 향상

	int T; //T(1 ≤ T ≤ 20)
	cin >> T;


	int N;//N(1 ≤ N ≤ 100,000), 지원자의 숫자
	int grade, inter;//서류 순위, 면접 순위
	
	for (int i = 0; i < T; i++) {
		cin >> N;	
		vector<pair<int, int>> v;


		for (int j = 0; j < N; j++) {
			cin >> grade >> inter;
			v.push_back(pair<int, int>(grade, inter));
		}


		sort(v.begin(), v.end());//오름차순 정렬

		int cnt = 1; //첫 번째 사원은 무조건 선발(서류심사 성적 1등)
		int interviewRank = v[0].second; //1 //첫 번째 사원의 인터뷰 심사 성적
		//cout << interviewRank << "\n";
		for (int k = 1; k < N; k++) {
			if (v[k].second < interviewRank) {//2
				cnt++;
				interviewRank = v[k].second;//3 , 123 이 매커니즘..!
			}
			
		}

		cout << cnt << "\n";

	}

}
