#include <iostream>
using namespace std;


int main() { 
    
    int T;
    cin >> T;//1 ≤ T ≤ 10,000


    int A = 300;
    int B = 60;
    int C = 10;

    if ((T % 10) != 0) {
        cout << -1;
    }
    else{
        cout << T / A << " " << (T % A) / B << " " << ((T % A) % B) / C;


    }



}
