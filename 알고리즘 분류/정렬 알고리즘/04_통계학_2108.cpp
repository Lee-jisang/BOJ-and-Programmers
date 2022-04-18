#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	double N; //개수 N(1 ≤ N ≤ 500,000) ,N은 홀수
	cin >> N;

	vector<int> v;
	double a;
	double sum = 0;
	for (int i = 0; i < N; i++) {
		cin >> a;
		sum = sum + a;
		v.push_back(a);
	}
	v.push_back(4001);
	sort(v.begin(), v.end());
	int cnt = 1;
	int k = 1;
	vector<pair<int, int>> v2;
	for (int i = 0; i < v.size(); i++) {
		if (i + 1 == v.size()) break;
		if (v[i] == v[i + 1]) {
			cnt++;			
		}
		else {
			if (k <= cnt) {
				k = cnt;
				v2.push_back(pair<int, int>(cnt, v[i]));
				//cout << v[i] << " " << cnt << "\n";
			}		
			cnt = 1;
		}		
	}

	sort(v2.begin(), v2.end());
	int cnt2 = 0;
	int first;
	int second;
	for (int i = 0; i < v2.size(); i++) {
		if (v2[v2.size() - 1].first == v2[i].first) {
			cnt2++;
			if (cnt2 == 1) {
				first=v2[i].second;
			}
			else if(cnt2==2){
				second = v2[i].second;
			}
			//cout << v2[i].first << " " << v2[i].second << "\n";
		}
			
	}

	v.back() = 0;
	if (round(sum / N) == -0)//산술 평균
		cout << 0 << "\n";
	else
		cout << round(sum / N) << "\n";//산술 평균
	cout << v[v.size() / 2 -1] << "\n"; //중앙값
	if (cnt2 == 1) {//최빈값
		cout << first << "\n";
	}
	else {
		cout << second << "\n";
	}
	cout << v[v.size() - 2] - v[0] << "\n";//범위
 	

}
