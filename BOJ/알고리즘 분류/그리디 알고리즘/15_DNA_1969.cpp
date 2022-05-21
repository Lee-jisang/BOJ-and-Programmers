#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
using namespace std;

// int 기준으로 내림차순, char 기준으로 오름차순  
bool cmp(const pair<int, char>& a, const pair<int, char>& b) {
	if (a.first == b.first) {//int가 같을때
		if (a.second < b.second) return true;//char 기준으로 오름차순  
		else return false;
	}
	else if (a.first > b.first) return true;//int가 내림차순
	else return false;
}


int main() {
	//ACGT 사전순
	//DNA 수,N은 1,000보다 작거나 같은 자연수
	//DNA 길이,M은 50보다 작거나 같은 자연수
	int N,M;
	cin >> N >> M;

	vector<string> v;
	string s;
	for (int i = 0; i < N; i++) {
		cin >> s;
		v.push_back(s);
	}

	int A;
	int C;
	int G;
	int T;

	string k = "";
	int hammingDistance = 0; // Hamming Distance의 합의 최소값 저장  변수  

	for (int j = 0; j < M; j++) {
		A = 0;
		C = 0;
		G = 0;
		T = 0;
		for (int i = 0; i < N; i++) {
			//cout << v[i][j];

			if (v[i][j] == 'A')
				A++;
			if (v[i][j] == 'C')
				C++;
			if (v[i][j] == 'G')
				G++;
			if (v[i][j] == 'T')
				T++;
		}

		vector<pair<int, char> > sorting; // 정렬하기 위한 벡터 
		sorting.push_back({ A,'A' });//1,'A'
		sorting.push_back({ T,'T' });//4,'T'
		sorting.push_back({ G,'G' });
		sorting.push_back({ C,'C' });
		
		//sort(sorting.begin(), sorting.end(), cmp); // 정렬  
		// 4 1 0 0
		// T A C G

		//sort(sorting.begin(), sorting.end()); // 오름 차순 정렬
		// 0 0 1 4
		// C G A T

		//sort(sorting.begin(), sorting.end(), greater<>()); // 내림 차순 정렬  
		//4 1 0 0
		//T A G C

		//int 기준으로 내림차순, char 기준으로 오름차순
		sort(sorting.begin(), sorting.end(), cmp); // 정렬  
/*
		for (int i = 0; i < 4; i++) {
			cout << sorting[i].first << " " << sorting[i].second;
			cout << "\n";

		}
*/


		hammingDistance += (N - sorting[0].first); // Hamming Distance 더해주기  
		k += sorting[0].second; // dna k 추가하기 

		//cout << "\n";

	}

	cout << k << '\n';
	cout << hammingDistance;


}
