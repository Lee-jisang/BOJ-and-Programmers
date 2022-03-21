
#include <iostream>
#include <algorithm>
using namespace std;

int dex(int n) {
    if (n < 100) {
        n = n + n / 10 + n % 10;
        return n;
    }
    else if (n < 1000) {
        n = n + n/100 + n/10%10 + n % 10;
        return n;
    }
    else if (n < 10000) {
        n = n + n/1000 + n/100%10 + n/10%10 + n%10;
        return n;
    }
}


int main() {
    int b[10000];
    for (int i = 0; i < 10000; i++)
        b[i] = i;

    int n=1;
    while (1) {
        if (n > 999) break;
        cout << n<< ":" << dex(n) << "\n";
        
        n++;
        
    }
    


}
