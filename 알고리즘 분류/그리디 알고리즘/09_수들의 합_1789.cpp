/*
문제
서로 다른 N개의 자연수의 합이 S라고 한다. S를 알 때, 자연수 N의 최댓값은 얼마일까?

입력
첫째 줄에 자연수 S(1 ≤ S ≤ 4,294,967,295)가 주어진다.

출력
첫째 줄에 자연수 N의 최댓값을 출력한다.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	unsigned long S;
	cin >> S;

	unsigned long i = 1;
	vector<pair<unsigned long, unsigned long>> s;
	unsigned long sum = 0;
	while (1) {
		if (sum < S) {
			sum = sum + i;
			s.push_back(pair<unsigned long, unsigned long>(i, sum));
			//cout << i << " " << sum << "\n";
			i++;
		}			
		else {
			if (S == s[s.size() - 1].second) {
				cout << s[s.size() - 1].first;//6
				break;
			}		
			else if (s[s.size() - 1].second > S && S > s[s.size() - 2].second) {
				cout << s[s.size() - 2].first;
				break;
			}
		}		
	}
}
