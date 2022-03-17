#include <iostream>
using namespace std;

int main() {
    int a[9]; //9개의 서로 다른 자연수
    int max = 0;
    int maxindex;
    int cnt = 0;

    for (int i = 0; i < 9; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 9; i++) {
        // 이전값들 중 최댓값보다 i번째 값이 더 크다면 최댓값과 그 인덱스를 갱신
        if (a[i] > max) {
            max = a[i];
            maxindex = i;
        }
    }

    cout << max << endl;
    cout << maxindex+1 << endl; //배열은 0부터 인덱스가 시작되므로 1플러스 해주는거 잊지말기
    
}
