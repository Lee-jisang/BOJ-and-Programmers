#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N; //단어의 개수
	cin >> N;

	string s;
	vector<pair<int, string> > v;

	for (int i = 0; i < N; i++) {		
		cin >> s;
		v.push_back(pair<int, string>(s.length(), s));
	}

	sort(v.begin(), v.end());//pair를 정렬하면 앞에기준으로 먼저정렬하고 같은게있으면 
	v.erase(unique(v.begin(), v.end()), v.end());//중복제거

	for (int i = 0; i < v.size(); i++){
		cout <<  v[i].second << "\n";
	}
}
