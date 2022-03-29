/*
문제
땅 위에 달팽이가 있다. 이 달팽이는 높이가 V미터인 나무 막대를 올라갈 것이다.
달팽이는 낮에 A미터 올라갈 수 있다. 하지만, 밤에 잠을 자는 동안 B미터 미끄러진다. 또, 정상에 올라간 후에는 미끄러지지 않는다.
달팽이가 나무 막대를 모두 올라가려면, 며칠이 걸리는지 구하는 프로그램을 작성하시오.

입력
첫째 줄에 세 정수 A, B, V가 공백으로 구분되어서 주어진다. (1 ≤ B < A ≤ V ≤ 1,000,000,000)

출력
첫째 줄에 달팽이가 나무 막대를 모두 올라가는데 며칠이 걸리는지 출력한다.
*/
//시간 초과
#include <iostream>
using namespace std;

int main() {
	int A, B, V; //낮에 올라가는 A, 밤에 내려가는 B, 높이 V
	cin >> A >> B >> V; //1 ≤ B < A ≤ V ≤ 1,000,000,000


	int temp=A;
	int cnt = 1;

	if(A-B==1)
		cout << V - A + (A - B);
	else {
		for (int i = 0; i < 1000000000; i++) {
			temp = temp - B;
			cnt++;
			temp = temp + A;
			if (temp >= V) {
				cout << cnt;
				return 0;
			}
		}
	}

}
 
 //수학적으로 
#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int A,B,V;
    scanf("%d %d %d",&A,&B,&V);
    int day;
    
    if((V-A)%(A-B)==0)
        day= (V-A)/(A-B);
    else
        day= (V-A)/(A-B)+1;
    
    printf("%d\n",day+1);
 
}
