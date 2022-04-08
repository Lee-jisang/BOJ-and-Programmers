#include <iostream>
#include <vector>
#include <cmath>;
#include <algorithm>
using namespace std;


int main() {
	
	int N, M;
	cin >> N >> M; //N과 M은 8보다 크거나 같고, 50보다 작거나 같은 자연수
	
	
	char a[8][8] = { 
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'}, };

	char b[8][8] = {	
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'}, 
		{'W','B','W','B','W','B','W','B'}, };

	char c;


	if (N == 8 && M == 8) {
		int cnt1 = 0;
		int cnt2 = 0;
		for (int i = 0; i < N; i++) {		
			for (int j = 0; j < M; j++) {
				cin >> c;	
				if (c != a[i][j]) cnt1++;
				if (c != b[i][j]) cnt2++;					
			}
		}		
		cout << min(cnt1, cnt2);
	}
	else {


	}
	





}
