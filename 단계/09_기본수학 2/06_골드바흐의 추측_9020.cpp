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




/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int prime[10000] = { 0, };
    int k = 0;
    //int cnt;
    //int cnt2 = 0;
    bool b;

    for (int i = 2; i <= 10000; i++) {
        b = true;
        for (int j = 2; j <= sqrt(i); j++) {           
            if (i % j == 0) {
                b = false;
                break;
            }           
        }
        if (b == true) cout << i << " ";

    }
    
    for (int i = 0; i < 1229; i++)
        cout << prime[i] << " ";
        
}
*/


#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

/*
bool Isprime(int a) {

    bool b;

    for (int i = 2; i <= a; i++) {
        b = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                b = false;
                break;
            }
        }
        if (b == true)  return true;
        else return false;
    }

}
*/

int main() {
/*
    int prime[10001] = { 0, };
    int k = 0;

    bool b;

    for (int i = 2; i <= 10000; i++) {
        b = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                b = false;
                break;            
            }            
        }
        if(b==true)  prime[k++] = i;
    }
*/



   

  
    int T;
    cin >> T;
    bool b;
    int n;

    

    for (int k = 0; k < T; k++) {

        vector<int> a;
        cin >> n;
        for (int i = 2; i <= n; i++) {

            b = true;
            for (int j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    b = false;
                    break;
                }
            }
            if (b == true)  a.push_back(i); //n이하의 소수
        }
        for (int i = a.size()-1; i >= 0; i--) {
            if (n / 2 >= a[i]) {
                cout << a[i] << " " << n - a[i];
                cout << "\n";
            }

        }

        //cout << "\n";
    }
   

}
