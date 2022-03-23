#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin,s); //공백을 포함한 문자열 입력!

    int cnt = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') 
            cnt++;
    }

    if (s[0] == ' ' && s[s.length() - 1] == ' ')
        cout << cnt + 1 - 2;
    else if (s[0] == ' ' && s[s.length() - 1] != ' ')
        cout << cnt + 1 - 1;
    else if (s[0] != ' ' && s[s.length() - 1] == ' ')
        cout << cnt + 1 - 1;
    else
        cout << cnt + 1;
}
