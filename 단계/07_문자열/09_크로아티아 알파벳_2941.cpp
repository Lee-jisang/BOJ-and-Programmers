#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
   
    int cnt = 0;
    int temp = 0;

    if (s.find("dz=") <= 100) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'c') {
                if (s[i + 1] == '=' || s[i + 1] == '-') {
                    cnt++;
                }
            }
            if (s[i] == 's' || s[i] == 'z') {
                if (s[i + 1] == '=') {
                    cnt++;
                }
            }
            if (s[i] == 'l' || s[i] == 'n') {
                if (s[i + 1] == 'j') {
                    cnt++;
                }
            }
            if (s[i] == 'd') {
                if (s[i + 1] == '-') {
                    cnt++;
                }
                if (s[i + 1] == 'z') {
                    if (s[i + 2] == '=') {
                        cnt++;
                        temp++;
                    }
                    cnt = cnt - 1;
                }
            }
        } 
        cout << s.length()- cnt - temp;
    }
    else {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'c') {
                if (s[i + 1] == '=' || s[i + 1] == '-') {
                    cnt++;
                }
            }
            if (s[i] == 's' || s[i] == 'z') {
                if (s[i + 1] == '=') {
                    cnt++;
                }
            }
            if (s[i] == 'l' || s[i] == 'n') {
                if (s[i + 1] == 'j') {
                    cnt++;
                }
            }
            if (s[i] == 'd') {
                if (s[i + 1] == '-') {
                    cnt++;
                }
            }

        }
        cout << s.length() - cnt;
    }

    

}
