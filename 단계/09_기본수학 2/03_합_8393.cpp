/*
문제
정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.

입력
첫째 줄에 정수 N (1 ≤ N ≤ 10,000,000)이 주어진다.

출력
N의 소인수분해 결과를 한 줄에 하나씩 오름차순으로 출력한다. N이 1인 경우 아무것도 출력하지 않는다.
*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; //정수 N (1 ≤ N ≤ 10,000,000)

    int cnt;

    if (N == 1) return 0; //N이 1인 경우는 아무것도 출력하지 않는다.

    for (int i = 2; i <= N; i++) {
        while (N % i == 0) {
            N = N / i;
            cout << i << "\n";
        }           
    }

/*
    for (int i = 0; i < 990; i++) {
        while (N % a[i] == 0) {
            N = N / a[i];
            cnt2[i]++;
            cout << a[i] << "\n";
        }
        //cout << cnt2[i] << " ";
    }
*/
    /*
    while (N % 2 == 0) {
        N=N / 2;
        cnt++;
    }

    cout <<cnt;
    */
    
}
