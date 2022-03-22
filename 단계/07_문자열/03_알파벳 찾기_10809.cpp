/*
문제
알파벳 소문자로만 이루어진 단어 S가 주어진다. 각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 단어 S가 주어진다. 단어의 길이는 100을 넘지 않으며, 알파벳 소문자로만 이루어져 있다.

출력
각각의 알파벳에 대해서, a가 처음 등장하는 위치, b가 처음 등장하는 위치, ... z가 처음 등장하는 위치를 공백으로 구분해서 출력한다.
만약, 어떤 알파벳이 단어에 포함되어 있지 않다면 -1을 출력한다. 단어의 첫 번째 글자는 0번째 위치이고, 두 번째 글자는 1번째 위치이다.
*/

//이렇게 풀지말자...
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

//find라는 좋은 함수가 있지 않느냐..
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    for(int i = 0; i < alphabet.length(); i++)
        cout << (int)s.find(alphabet[i]) << " ";
    return 0;
}
