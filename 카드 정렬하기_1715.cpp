//틀린 풀이: 순차적으로 하면 안됨
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

//우선순위큐 , 최소 힙을 이용한 풀이
#include <iostream>
#include <queue>
using namespace std;

int main() {
	int num, val;
	long long result = 0;
	cin >> num;
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < num; i++) {
		cin >> val;
		pq.push(val);
	}
	while (pq.size() > 1) {
		int a = pq.top();
		pq.pop();
		a += pq.top();
		pq.pop();
		result += a;
		pq.push(a);
	}
	cout << result;
}
