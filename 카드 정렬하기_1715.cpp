#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main() {

	int N;
	cin >> N;

	vector<long long> v;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back(a);

	}

	sort(v.begin(), v.end());

	if (v.size() == 1) {
		cout << v[0];
	}
	else if (v.size() == 2) {
		cout << v[0] + v[1];
	}
	else {
		vector<long long> v2;
		long long sum = v[0] + v[1];
		v2.push_back(sum);
		for (int i = 2; i < v.size(); i++) {
			sum = sum + v[i];
			v2.push_back(sum);
		}
		long long sum2 = 0;
		for (int i = 0; i < v2.size(); i++) {
			sum2 += v2[i];
		}
		
		cout << sum2;
	}

}
