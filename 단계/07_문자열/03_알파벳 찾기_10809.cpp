#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int a[26] = { 0, };
    for (int i = 0; i < 26; i++)
        a[i] = -1;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a') {
            a[0] = i;
            break;
        }        
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'b') {
            a[1] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'c') {
            a[2] = i;
            break;
        }
    }


    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'd') {
            a[3] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'e') {
            a[4] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'f') {
            a[5] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'g') {
            a[6] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'h') {
            a[7] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'i') {
            a[8] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'j') {
            a[9] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'k') {
            a[10] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'l') {
            a[11] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'm') {
            a[12] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'n') {
            a[13] = i;
            break;
        }
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'o') {
            a[14] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'p') {
            a[15] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'q') {
            a[16] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'r') {
            a[17] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 's') {
            a[18] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 't') {
            a[19] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'u') {
            a[20] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'v') {
            a[21] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'w') {
            a[22] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'x') {
            a[23] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'y') {
            a[24] = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'z') {
            a[25] = i;
            break;
        }
    }


    for (int i = 0; i < 26; i++) {
        cout << a[i] << " ";
    }
       
}
