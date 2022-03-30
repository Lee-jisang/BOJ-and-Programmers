#include<iostream>
#include<string>
using namespace std;

//string 클래스는 문자의 끝에 null문자(‘\0’) 등이 포함되지 않는다.

int main() {
	 //걷는 거리가 같을때는 낮은 층수
	 //걷는 거리가 다를때는 적은 층수
	int T;
	cin >> T;


	int H, W, N; //1 ≤ H, W ≤ 99, 1 ≤ N ≤ H × W
	
	for (int i = 0; i < T; i++) {
	//while (1) {
		cin >> H >> W >> N;
		if (N / H >= 10) {
			if (N % H == 0)
				cout << H << N / H;
			else
				cout << N % H << N / H + 1;
		}
		else {
			if (N % H == 0)
				cout << H << 0 << N / H;
			else if(N / H + 1>=10)
				cout << N % H << N / H + 1;
			else
				cout << N % H << 0 << N / H + 1;
		}
				
		cout << "\n";
	//}

	}

}
