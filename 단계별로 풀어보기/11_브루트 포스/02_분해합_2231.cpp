#include <iostream>
#include <vector>
using namespace std;




int main() {
	int n;
	cin >> n; //N(1 ≤ N ≤ 1,000,000)

	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (n == i + i/1000000 + i % 1000000 / 100000 + i % 100000 / 10000 + i % 10000 / 1000 + i % 1000 / 100 + i % 100 / 10 + i % 10) {
			cnt++;
			cout << i << "\n";	
			break;
		}
	}
	if (cnt == 0)
		cout << 0 << "\n";

	/*
		cout << n / 1000000 << "\n";
		cout << n % 1000000 / 100000 << "\n";
		cout << n % 100000 / 10000 << "\n";
		cout << n % 10000 / 1000 << "\n";
		cout << n % 1000 / 100 << "\n";
		cout << n % 100 / 10 << "\n";
		cout << n % 10 << "\n";

		*/
		//vector<int> v;
		// 6자리 999999

	/*
		for (int i = 1; i <= n; i++) {
			if (i < 10) {
				if (n == i + i) {
					cout << i << "\n";
					//break;
				}

			}
			else if (i < 100) { //두자리
				if (n == i + i / 10 + i % 10) {
					cout << i << "\n";
					//break;
				}
			}
			else if (i < 1000) { //세자리
				if (n == i + i / 100 + (i % 100) / 10 + i % 10) {
					cout << i << "\n";
					//break;
				}
			}
			else if (i < 10000) { //네자리
				if (n == i + i / 1000 + i % 1000 / 100 + (i % 100) / 10 + i % 10) {
					cout << i << "\n";
					//break;
				}
				else {
					cout << 0 << "\n";
					break;
				}
			}
			else if (i < 100000) { //다섯자리
				if (n == i + i / 10000 + i % 10000 / 1000 + i % 1000 /100 + i%100/10 +i % 10) {
					cout << i << "\n";
					//break;
				}
			}
			else if (i < 1000000) {
				if (n == i + i / 100000 + i % 100000 / 10000 + i % 10000 / 1000 + i % 1000 / 100 + i % 100/10 + i%10) {
					cout << i << "\n";
					//break;
				}
			}
			else {
				cout << 0 << "\n";
			}

		}
	*/
}
