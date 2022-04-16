#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	long long N; //도시의 개수
	cin >> N;


	vector<long long> v1;
	vector<long long> v2;

	vector<pair<int, int>> v;

	int len;
	for (int i = 0; i < N - 1; i++) {
		cin >> len;//도로의 길이
		v1.push_back(len);
	}

	int price;
	for (int i = 0; i < N; i++) {
		cin >> price; //주유소 가격
		v2.push_back(price);
	}

	for (int i = 0; i < N-1; i++) {
		v.push_back(pair<int,int>(v2[i],v1[i]));//가격 먼저 그다음 도로길이		
	}


	long long tmp=1000000001;
	long long sum = 0;
	for (int i = 0; i < v.size(); i++) {
		//cout << v[i].first << " " << v[i].second << "\n";
		if (tmp > v[i].first) {
			tmp = v[i].first;			
		}
		sum = sum + tmp* v[i].second;
	}
	cout << sum;
}
