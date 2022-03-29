#include <iostream>
using namespace std;

int main() {

/*
	int sum = 0;

	for (int i = 1; i <4473; i++) {
		sum = sum + i;
		if(9000000<sum)
			cout << " "<< sum;
			
	}
*/	
	
	int X;
	cin >> X;

	int cnt = 0;
	int cnt1 = 0;

	for (int i = 1; i < 4473; i++) {
		if (i % 2 == 0) {
			for (int j = 1; j < i + 1; j++) {
				cnt++;
				if(cnt==X)
					cout << j;
			}
		}
		else {
			for (int j = i; j > 0; j--) {
				cnt++;
				if(cnt==X)
					cout << j;
			}
		}
	}

	cout << "/";

	for (int i = 1; i < 4473; i++) {
		if (i % 2 == 1) {
			for (int j = 1; j < i + 1; j++) {
				cnt1++;
				if (cnt1 == X)
					cout << j;
			}
		}
		else {
			for (int j = i; j > 0; j--) {
				cnt1++;
				if (cnt1 == X)
					cout << j;
			}
		}
	}
	
}
