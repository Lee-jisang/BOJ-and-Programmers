#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
	string s;
	cin >> s;

	int cnt = 0;
	int sum = 0;
	int tmp = 0;
	vector<int> v;
	for (int i = s.length() - 1; i >= 0; i--) {
		cnt++;
		/*
		if (s[i] == '+') { 
			cnt = 0;
			tmp++;
		}
		else if (s[i] == '-') {
			cnt = 0;
			tmp++;
		}*/
		if (s[i] == '+' || s[i]=='-') {//+.-이면
			cnt = 0;	
		}
		if (s[i] == '+') {
			s[i] = '0';
		}

		cout << (s[i] - '0') * pow(10, cnt - 1) << " ";

		sum = sum + (s[i] - '0') * pow(10, cnt - 1);
		//cout << sum << " ";
		




		
		

		//cout << sum << " ";


	}
	cout << "\n";

	
	//cout << sum;




}
