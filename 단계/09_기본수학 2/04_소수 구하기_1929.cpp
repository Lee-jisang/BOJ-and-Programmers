/*
문제
M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 자연수 M과 N이 빈 칸을 사이에 두고 주어진다. (1 ≤ M ≤ N ≤ 1,000,000) M이상 N이하의 소수가 하나 이상 있는 입력만 주어진다.

출력
한 줄에 하나씩, 증가하는 순서대로 소수를 출력한다.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int min,max;
    bool *prime;
    cin >> min;
    cin >> max;
    prime = new bool[max+1];
    fill_n(prime, max+1, 1);
    prime[0] = false;
    prime[1] = false;

    for (int i = 2; i <= sqrt(max); i++)
        if(prime[i] == true)
            for(int j = i*2; j <= max; j += i)
                prime[j] = false;

    for (int i = min; i <= max; i++)
        if(prime[i] == true)
            cout << i << "\n";
   return 0;
}


//시간초과
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int M, N;
    cin >> M >> N;
    int cnt;

    for (int i = M; i <= N; i++) {
        cnt = 0;
        for (int j = 1; j <= i; j++) {
            if ((i % j) == 0)
                cnt++;
        }
        if (cnt == 2)
            cout << i << "\n";
    }

}
