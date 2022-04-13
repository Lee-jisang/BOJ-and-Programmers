#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> v;
	int A;

	for (int i = 0; i < N; i++) {
		cin >> A; //1 ≤ Ai ≤ 1,000,000
		v.push_back(A);
	}

	int B; //총시험감독관이 감시할 수 있는 응시자 수
	int C; //부시험감독관이 감시할 수 있는 응시자 수

	cin >> B >> C; //(1 ≤ B, C ≤ 1,000,000)
	long long sum = 0;
	for (int i = 0; i < N; i++) {
		if (v[i] <= B) { //한방의 응시생수가 총감독관이 감시할 수있는 응시자 수보다 작거나 같을때,
			sum = sum + 1;
		}
		else {//v[i] > B
			if ((v[i] - B) % C == 0) { //정수일 때,나머지가 없을때
				sum = sum + (v[i] - B) / C + 1;

			}
			else { //정수가 아닐때, 나머지가 있을때
				sum = sum + (v[i] - B) / C + 2;
			}
		}


	}

	cout << sum;

}
