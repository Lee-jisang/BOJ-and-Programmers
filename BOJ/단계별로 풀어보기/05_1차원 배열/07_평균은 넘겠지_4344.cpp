/*
문제
대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다.

입력
첫째 줄에는 테스트 케이스의 개수 C가 주어진다.
둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고, 이어서 N명의 점수가 주어진다. 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

출력
각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다.
*/

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int C;
    cin >> C; //테스트 케이스 개수


    for (int i = 0; i < C; i++) {
        double sum = 0; //합
        double average = 0; //평균
        double cnt = 0; //평균보다 큰 수 카운트
        double N = 0;
        cin >> N;  //학생의 수

        //double* a = new double[N]; //동적배열로 하면 컴파일에러, 비쥬얼에서 돌리면 실행됨
        double a[1000]; //여기서 런타임 오류 났었음, 학생의 수 N(1 ≤ N ≤ 1000, N은 정수) 이므로 바운더리를 넓게 잡아줘야 outofbounds 오류가안뜸
        for (int i = 0; i < N; i++) {
            cin >> a[i];
            sum = sum + a[i];
        }

        average = sum / N;

        for (int i = 0; i < N; i++) {
            if (a[i] > average)
                cnt++;
        }


        cout << fixed;//소수점 자리 고정
        cout.precision(3);//소수점 3자리

        cout << cnt / N * 100 << "%" << "\n";

    }



}
