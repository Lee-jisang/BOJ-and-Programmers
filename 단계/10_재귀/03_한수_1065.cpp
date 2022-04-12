/*
문제
어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다. 등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 

입력
첫째 줄에 1,000보다 작거나 같은 자연수 N이 주어진다.

출력
첫째 줄에 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력한다.
*/

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

//무한루프는 아니지만 이런식으로 풀어야하나봄
#include <iostream>
using namespace std;
bool hansoo(int a){
    if(a < 100) 
        return true;
    int a1, a2, a3;
    a3 = a / 100;
    a1 = a % 10;
    a2 = a % 100 / 10;
    if(a3-a2 == a2-a1)
        return true;
    return false;
}
int main(void){
    int N, count = 0;
    cin>>N;
    for(int i =1; i <= N; i++){
        if(hansoo(i))
            count++;
        }
    cout<<count;
}
