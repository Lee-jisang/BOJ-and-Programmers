#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int a[8] = { 0, };
    int sum = 0;

    for (int i = 0; i < s.length(); i++) {
        if ((s[i] - 'A') <= 2)  a[0]++; //3
        else if ((s[i] - 'A') <= 5)  a[1]++; //4
        else if ((s[i] - 'A') <= 8)  a[2]++; //5
        else if ((s[i] - 'A') <= 11)  a[3]++;
        else if ((s[i] - 'A') <= 14)  a[4]++;
        else if ((s[i] - 'A') <= 18)  a[5]++;
        else if ((s[i] - 'A') <= 21)  a[6]++;
        else  a[7]++;
    }
        
    for (int i = 0; i < 8; i++) {
        a[i] = a[i] * (i + 3);
        sum = sum + a[i];
    }
    cout << sum;



}
