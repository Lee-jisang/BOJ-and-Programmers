/*
문제
알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.

입력
첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.

출력
첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.
*/
    
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    int a[26] = { 0, };
    string alphabet = "ABCDEFGHIJKLMNOPQRSTWXYZ";

    for (int i = 0; i < s.length(); i++) {
/*
        for (int j = 0; j < 26; j++) {
            if(s[i]==alphabet[j]) a[j]++;
        }

*/
        if (s[i] == 'A' || s[i] == 'a') a[0]++; //A
        if (s[i] == 'B' || s[i] == 'b') a[1]++; //B
        if (s[i] == 'C' || s[i] == 'c') a[2]++; //C
        if (s[i] == 'D' || s[i] == 'd') a[3]++;
        if (s[i] == 'E' || s[i] == 'e') a[4]++;
        if (s[i] == 'F' || s[i] == 'f') a[5]++;
        if (s[i] == 'G' || s[i] == 'g') a[6]++;
        if (s[i] == 'H' || s[i] == 'h') a[7]++;
        if (s[i] == 'I' || s[i] == 'i') a[8]++;
        if (s[i] == 'J' || s[i] == 'j') a[9]++;
        if (s[i] == 'K' || s[i] == 'k') a[10]++;
        if (s[i] == 'L' || s[i] == 'l') a[11]++;
        if (s[i] == 'M' || s[i] == 'm') a[12]++;
        if (s[i] == 'N' || s[i] == 'n') a[13]++;
        if (s[i] == 'O' || s[i] == 'o') a[14]++;
        if (s[i] == 'P' || s[i] == 'p') a[15]++;
        if (s[i] == 'Q' || s[i] == 'q') a[16]++;
        if (s[i] == 'R' || s[i] == 'r') a[17]++;
        if (s[i] == 'S' || s[i] == 's') a[18]++;
        if (s[i] == 'T' || s[i] == 't') a[19]++;
        if (s[i] == 'U' || s[i] == 'u') a[20]++;
        if (s[i] == 'V' || s[i] == 'v') a[21]++;
        if (s[i] == 'W' || s[i] == 'w') a[22]++;
        if (s[i] == 'X' || s[i] == 'x') a[23]++;
        if (s[i] == 'Y' || s[i] == 'y') a[24]++;
        if (s[i] == 'Z' || s[i] == 'z') a[25]++;
    }

    int max = 0;
    int maxindex = 0;
    int cnt = 0;


    for (int i = 0; i < 26; i++) {   
        if (a[i] > 0) {
            //cout << a[i] << " ";
            if (max < a[i]) {
                max = a[i];
                cnt = 0; //생각 못한부분,큰거 갱신할때 cnt를 0으로
                maxindex = i;
            }
            if (max == a[i]) //생각못한부분
                cnt++;
            
        }
     
    }

    if (cnt > 1) cout << "?";
    else cout << char(maxindex+65);
    
}



#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string c;
    cin >> c;
    int max = 0;
    int cnt = 0;
    int target;
    int a[26] = {0,};
    transform(c.begin(), c.end(), c.begin(), (int(*)(int))toupper); //대문자로 통째로 변형
    for(int i = 0; i < c.length(); i++)
    {
        a[c[i] - 'A']++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(max < a[i])
        {
            max = a[i];
            cnt = 0;
            target = i;
        }
        if(max == a[i])
            cnt++;
    }
    if(cnt > 1)
        cout << "?";
    else
        cout << (char)(target+'A');
    return 0;
}
