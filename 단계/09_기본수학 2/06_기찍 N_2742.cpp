#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int prime[1229] = { 0, };
    int p = 0;
    int cnt;

    for (int i = 2; i <= 10000; i++) {
        cnt = 0;
        for (int j = 2; j <= i; j++) {
            if (i % j == 0)
                cnt++;
        }
        if (cnt == 1) {
            prime[p++] = i;

        }
            
    }
    
	int T;
	cin >> T;
    int dprime;
    int count = 0;
	
	int n; // 2보다 큰 짝수, 4 ≤ n ≤ 10,000, 2개의 소수의 합!
	for (int i = 0; i < T; i++) {
		cin >> n;
        for (int j = n/2; j >=2; j--) {
            if (n > prime[j]) {
                //cout << prime[j] << " ";
                dprime = n - prime[j];
                cnt = 0;
                for (int k = 2; k <= dprime; k++) {
                    if ((dprime % k) == 0)
                        cnt++;
                }
                if (cnt == 1) {    
                    count++;            
                    cout << prime[j] << " ";
                    cout << dprime << " ";
                    cout << "\n";
                     
                }         
                //cout << n - prime[j] << " ";
                
            }                          
        } 


	}


    //cout << count;
}
