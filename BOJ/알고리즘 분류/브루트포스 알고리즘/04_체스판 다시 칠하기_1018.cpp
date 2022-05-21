//비교만 하면되는데... , 경우의수 다출력!
#include <iostream>
#include <vector>
#include <cmath>;
#include <algorithm>
using namespace std;

int main() {	
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

	char c[51][51];

	char d[8][8];


	int N, M;
	cin >> N >> M; //N과 M은 8보다 크거나 같고, 50보다 작거나 같은 자연수

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> c[i][j];
		}
	}

	int n2 = 0;
	int m2 = 8;

	for (int i = 0; i < N-8+1; i++) {//세로,3번
		int n = 0;
		int m = 8;	


		for (int j = 0; j < M-8+1; j++) {//가로, 6번



			for (int k = n2; k < m2; k++) {
				for (int l = n; l < m; l++) {
					
					cout << c[k][l];
					
				}	
				cout << "\n";	
				
			}			
			n++;
			m++;
			cout << "\n";	
		
		}
		n2++;
		m2++;
	}


}


//풀었다!! 비교해서 카운트 작은거 
#include <iostream>
#include <vector>
#include <cmath>;
#include <algorithm> 
using namespace std;


int main() {
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

	char c[51][51];

	char d[8][8];


	int N, M;
	cin >> N >> M; //N과 M은 8보다 크거나 같고, 50보다 작거나 같은 자연수

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> c[i][j];
		}
	}
	int cnt1;
	int cnt2;

	vector<int> v;

	int n2 = 0;
	int m2 = 8;

	for (int i = 0; i < N - 8 + 1; i++) {//세로,3번
		int n = 0;
		int m = 8;


		for (int j = 0; j < M - 8 + 1; j++) {//가로, 6번
			cnt1 = 0;
			cnt2 = 0;


			for (int k = n2; k < m2; k++) {
				for (int l = n; l < m; l++) {
					//cout << c[k][l];
					if (c[k][l] != a[k - i][l - j]) cnt1++; //[k - i][l - j] 계속 0~8로 비교하기 위해서, 이 포인트
					if (c[k][l] != b[k - i][l - j]) cnt2++;

				}
				//cout << "\n";

			}
			n++;
			m++;
			v.push_back(min(cnt1,cnt2));
			//cout << cnt1 << " " << cnt2 << "\n";
			//cout << "\n";

		}
		n2++;
		m2++;
	}

	sort(v.begin(), v.end());

	cout << v[0];


}


//함수형 풀이
#include<iostream> 
#include<algorithm> 
using namespace std; 

const char b[8][9] = { {"BWBWBWBW"}, {"WBWBWBWB"}, {"BWBWBWBW"}, {"WBWBWBWB"}, {"BWBWBWBW"}, {"WBWBWBWB"}, {"BWBWBWBW"}, {"WBWBWBWB"} }; 
const char w[8][9] = { {"WBWBWBWB"}, {"BWBWBWBW"}, {"WBWBWBWB"}, {"BWBWBWBW"}, {"WBWBWBWB"}, {"BWBWBWBW"}, {"WBWBWBWB"}, {"BWBWBWBW"} }; 

int black(int x, int y); 
int white(int x, int y); 

char board[50][50]; 

int main() { 
    int row, columns, result = 123456;
    cin >> row >> columns; 
    for (int i = 0; i < row; i++) 
        cin >> board[i]; 
    for (int i = 0; i < row - 7; i++){ 
        for (int j = 0; j < columns - 7; j++) {
            result = min(result, min(white(i, j), black(i, j))); 
        } 
    } cout << result << endl; return 0; 
} 

int black(int x, int y) 
{ 
    int cnt = 0; 
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[x + i][y + j] != b[i][j]) cnt++;
        } 
    } return cnt;
} 

int white(int x, int y) 
{ 
    int cnt = 0; 
    for (int i = 0; i < 8; i++) 
    { 
        for (int j = 0; j < 8; j++) {
            if (board[x + i][y + j] != w[i][j]) cnt++; 
        }
    } return cnt; 
}

