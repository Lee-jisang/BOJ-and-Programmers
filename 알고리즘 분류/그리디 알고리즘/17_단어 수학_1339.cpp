#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	int N; //단어의 개수 N(1 ≤ N ≤ 10)
	cin >> N;

	string s;
	vector<pair<int, string>> v;
	for (int i = 0; i < N; i++) {
		cin >> s;
		v.push_back(pair<int, string>(s.length(), s));
	}

	sort(v.begin(), v.end(), greater<>());

	int maxlen = v[0].second.length();
	for (int i = 1; i < N; i++) {
		int iteratorCnt = maxlen - (v[i].second.length());
		for (int j = 0; j < iteratorCnt; j++)
			v[i].second = v[i].second.insert(0, "0");
	}


	for (int i = 0; i < N; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}

	char a[10] = { '9','8','7','6','5','4','3','2','1','0' };
	int b[26] = { 0, };
	int cnt = 0;
	vector<pair<char, char>> c;
	

	int k = 0;
	for (int i = 0; i < maxlen; i++) {
		for (int j = 0; j < N; j++) {
			cout << v[j].second[i];
			if(v[j].second[i] != '0')
				b[(v[j].second[i] - '0') - 17]++;
			if (b[(v[j].second[i] - '0') - 17]==1) {

				c.push_back(pair<char, char>(v[j].second[i], a[k]));
	
				v[j].second[i] = a[k];
				k = k + 1;
			}
			else {
				for (int g = 0; g < c.size(); g++) {
					if (c[g].first == v[j].second[i])
						v[j].second[i] = c[g].second;
				}
			}
		

		}
			
		cout << "\n";
	}


	for (int i = 0; i < maxlen; i++) {
		for (int j = 0; j < N; j++) {
			cout << v[j].second[i];
		}

		cout << "\n";
	}


	for (int i = 0; i < N; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}

	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += stoi(v[i].second);
	}

	cout << sum;
}
