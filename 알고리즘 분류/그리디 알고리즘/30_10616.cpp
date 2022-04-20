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
