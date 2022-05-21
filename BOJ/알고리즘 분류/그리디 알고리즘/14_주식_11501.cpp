//시간 초과 풀이..
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//매일 그는 아래 세 가지 중 한 행동을 한다.
//주식 하나를 산다.
//원하는 만큼 가지고 있는 주식을 판다.
//아무것도 안한다.


int main() {
	int T; //테스트 케이스수
	cin >> T;
	int N; //날의 수 , N(2 ≤ N ≤ 1,000,000)
	
	for (int i = 0; i < T; i++) {
	
		//vector<int> sum(N);
		
		int sum = 0;
		cin >> N; //날의 수
		vector<int> n(N);
		vector<int> profit(N-1);
		

		for (int k = 0; k < N; k++) 
			cin >> n[k];//주식 가격

		for (int i = 0; i < N - 1; i++) {
			int p = 0;
			fill(profit.begin(), profit.end(), 0);
			for (int j = i+1; j < N; j++) {
				if (n[i] < n[j]) {

					profit[p++] = n[j] - n[i];
					//cout << n[j] - n[i] << " ";	
					
		
				}
				sort(profit.begin(), profit.end());
				//cout << profit.back() << " ";
			}
			//cout << profit.back() << " ";
			sum = sum + profit.back();
			//cout << "\n";
		
		}
		cout << sum << "\n";
		
	}




}


//뒤에서 부터 큰값 기준
#include <iostream>
#include <vector>
#include <cmath>;
#include <algorithm>

using namespace std;

//매일 그는 아래 세 가지 중 한 행동을 한다.
//주식 하나를 산다.
//원하는 만큼 가지고 있는 주식을 판다.
//아무것도 안한다.


int main() {
	int T; 
	cin >> T;
	int N; 
	
	for (int i = 0; i < T; i++) {	
		cin >> N; //날의 수
		vector<int> n;		

		for (int k = 0; k < N; k++) {
			int x;
			cin >> x;
			n.push_back(x);
		}	

		
		long long sum = 0;		
		int mv = -1;

		for (int i = N-1; i >= 0; i--) {//뒤에서 부터
			mv = max(mv, n[i]); //큰값을 기준으로
			sum = sum+ (mv-n[i]); //주식가격을 빼면 최대이익
			/*
			ex) N = 5
				1 1 3 1 2
				i=4
				mv=2
				2-2=0
				i=3
				mv=2
				2-1=1
				i=2
				mv=3
				3-3=0
				i=1
				mv=3
				3-1=2
				i=0
				mv=3
				3-1=2

				sum=5

			*/
		}
		cout << sum << "\n";	
	}
}
