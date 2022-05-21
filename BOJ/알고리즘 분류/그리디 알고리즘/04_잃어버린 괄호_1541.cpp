//내 풀이
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt = 0;
    vector<double> v;
    for (int i = s.length() - 1; i >= 0; i--) {
        cnt++;

        if (s[i] == '+' || s[i] == '-') {//+.-이면
            cnt = 0;
        }
        if (s[i] == '+') {
            s[i] = '0';
        }   
        v.push_back((s[i] - '0') * pow(10, cnt - 1));
    }

    int sum = 0;
    bool isminus = false;
   
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] < 0) {
            v[i] = 0;
            isminus = true;
        }

        if (isminus) {
            sum = sum - v[i];
        }
        else {
            sum = sum + v[i];
        }      
     
    }

    cout << sum;




}




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
