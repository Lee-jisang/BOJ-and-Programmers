#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N; //사람의 수, N(1 ≤ N ≤ 1,000)
	cin >> N;
	vector<int> v;

	int a;
	for (int i = 0; i < N; i++) {
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	int sum = 0;
	int ans = 0;
	for (int i = 0; i < v.size(); i++) {
		sum = sum + v[i];
		ans = ans + sum;
		
	}
	cout << ans << "\n";

}
