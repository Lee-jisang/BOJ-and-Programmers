
#include <iostream>
#include <string>
using namespace std;

int main() {
    string A;
    string B;
    cin >> A >> B;
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;

    string s1 = B.substr(B.length() - A.length());
    string s2 = B.substr(0, B.length() - (B.length() - A.length()));



    if (A.length() == B.length()) {
        for (int i = 0; i < A.length(); i++) {
            if (A[i] != B[i])
                cnt1++;
        }
        cout << cnt1;
    }
    else {//문자열의 길이 다를 때,
        if (B.find(A) / 50 == 0) {
            cout << 0;
        }
        else {
            for (int i = 0; i < A.length(); i++) {
                if (A[i] != s1[i])
                    cnt2++;
            }

            for (int i = 0; i < A.length(); i++) {
                if (A[i] != s2[i])
                    cnt3++;
            }

            if (cnt2 < cnt3)
                cout << cnt2;
            else
                cout << cnt3;
        }

    }

}
