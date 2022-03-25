#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; //1<=N<=1000000000

    if (N == 1)
        cout << 1;


    long double a = 2;
    long double b = 7;
    double sum=0.0;

    for (long double i = 1; i <= 18257; i++) {
        if (a <= N && N <= b)
            cout << i + 1;
        a = a + 6.0 * i;
        b = b + 6.0 * (i+1);
    }


}
