/*
문제
예전에는 운영체제에서 크로아티아 알파벳을 입력할 수가 없었다. 따라서, 다음과 같이 크로아티아 알파벳을 변경해서 입력했다.

크로아티아 알파벳	변경
č	c=
ć	c-
dž	dz=
đ	d-
lj	lj
nj	nj
š	s=
ž	z=
예를 들어, ljes=njak은 크로아티아 알파벳 6개(lj, e, š, nj, a, k)로 이루어져 있다. 단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.

dž는 무조건 하나의 알파벳으로 쓰이고, d와 ž가 분리된 것으로 보지 않는다. lj와 nj도 마찬가지이다. 위 목록에 없는 알파벳은 한 글자씩 센다.

입력
첫째 줄에 최대 100글자의 단어가 주어진다. 알파벳 소문자와 '-', '='로만 이루어져 있다.

단어는 크로아티아 알파벳으로 이루어져 있다. 문제 설명의 표에 나와있는 알파벳은 변경된 형태로 입력된다.

출력
입력으로 주어진 단어가 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.
*/

int main() {
	string str;
	cin >> str;
	int num = 0;

	int i = 0;
	while (i < str.length()) {
		if (str[i] == 'c') {
			if (str[i + 1] == '=')
				i++;
			else if (str[i + 1] == '-')
				i++;
		}
		else if (str[i] == 'd') {
			if (str[i + 1] == '-')
				i++;
			else if (str[i + 1] == 'z'&&str[i + 2] == '=')
				i += 2;
		}
		else if (str[i] == 'l') {
			if (str[i + 1] == 'j') 
				i++;
		}
		else if (str[i] == 'n') {
			if (str[i + 1] == 'j')
				i++;
		}
		else if (str[i] == 's') {
			if (str[i + 1] == '=') 
				i++;
		}
		else if (str[i] == 'z') {
			if (str[i + 1] == '=')
				i++;
		}
		num++;
		i++;
	}
	printf("%d\n", num);
}

//왜틀렸는지 모르겠네
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


//else 붙이면 맞았습니다..?

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
   
    int cnt = 0;


    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'c') {
            if (s[i + 1] == '=' || s[i + 1] == '-') {
                i++;
            }
        }
        else if (s[i] == 's' || s[i] == 'z') {
            if (s[i + 1] == '=') {
                i++;
            }
        }
        else if (s[i] == 'l' || s[i] == 'n') {
            if (s[i + 1] == 'j') {
                i++;
            }
        }
        else if (s[i] == 'd') {
            if (s[i + 1] == '-') {
                i++;
            }
            else if (s[i + 1] == 'z') {
                if (s[i + 2] == '=')
                    i = i + 2;
            }
        }
        cnt++;
        i++;
    }
    cout << cnt << "\n";
        
    

    

}
