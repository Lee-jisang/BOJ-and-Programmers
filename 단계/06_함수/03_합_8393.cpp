
//함수화x-시간초과
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N; // 0<N<=1000

    int cnt = 99;

    if (N < 100) {
        cout << N << "\n";
    }
    else {
        while (1) {
            if ((N / 100) - (N / 10 % 10) == (N / 10 % 10) - (N % 10)) {
                cnt++;
            }                
            N--;
            if (N == 100) break;
        }
    }
    cout << cnt << "\n";
    return 0;

}


//함수화-역시 무한루프를 써서 시간초과로 나옴
#include <iostream>
using namespace std;

int han(int a) {
    int cnt = 99;

    if (a < 100) {
        return a;
    }
    else {
        while (1) {
            if ((a / 100) - (a / 10 % 10) == (a / 10 % 10) - (a % 10)) {
                cnt++;
            }
            a--;
            if (a == 100) break;
        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N; // 0<N<=1000


    cout << han(N);
    return 0;

}
