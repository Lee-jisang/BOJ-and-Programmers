#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
/*
자주 나오는 단어일수록 앞에 배치한다.
해당 단어의 길이가 길수록 앞에 배치한다.
알파벳 사전 순으로 앞에 있는 단어일수록 앞에 배치한다
*/

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
	if (a.first.length() == b.first.length() && a.second == b.second) return a < b;
	else if (a.second == b.second) {
		return a.first.length() > b.first.length();
	}
	return a.second > b.second;//위 조건이 아닐때는 탈출
}


int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);


	map<string, int> m;
	int N, M;
	cin >> N >> M;


	string word;
	for (int i = 0; i < N; i++) {
		cin >> word;
		if (word.length() >= M) {
			if (m.find(word) != m.end()) {//word가 있으면
				m[word] += 1;
			}
			else {
				m[word] = 1;
			}
		}
	}

	vector<pair<string, int>> v(m.begin(), m.end());
	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++)
		cout << v[i].first << "\n";

}
