/*
문제
베르트랑 공준은 임의의 자연수 n에 대하여, n보다 크고, 2n보다 작거나 같은 소수는 적어도 하나 존재한다는 내용을 담고 있다.
이 명제는 조제프 베르트랑이 1845년에 추측했고, 파프누티 체비쇼프가 1850년에 증명했다.
예를 들어, 10보다 크고, 20보다 작거나 같은 소수는 4개가 있다. (11, 13, 17, 19) 또, 14보다 크고, 28보다 작거나 같은 소수는 3개가 있다. (17,19, 23)
자연수 n이 주어졌을 때, n보다 크고, 2n보다 작거나 같은 소수의 개수를 구하는 프로그램을 작성하시오. 

입력
입력은 여러 개의 테스트 케이스로 이루어져 있다. 각 케이스는 n을 포함하는 한 줄로 이루어져 있다.
입력의 마지막에는 0이 주어진다.

출력
각 테스트 케이스에 대해서, n보다 크고, 2n보다 작거나 같은 소수의 개수를 출력한다.
*/

//시간초과
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; //1 ≤ n ≤ 123,456
    int cnt;
    int cnt2;
    
    while (1) {
        cin >> n;
        if (n == 0)
            return 0;

        cnt2 = 0;
        for (int i = n+1; i <= 2 * n; i++) {
            cnt = 0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0)
                    cnt++;
            }
            if (cnt == 2)
                cnt2++;
        }

        
        cout << cnt2 << "\n";

    }
}



//에라토스테네스의 체
/*
#include<stdio.h>
#include<math.h>

int main(void)

{
	int num;
	int cnt = 0;
	int arr[10000];
	scanf("%d", &num);

	for (int i = 2; i <= num; i++)
	{
		arr[i] = i;
	}

	for (int i = 2; i < sqrt(num); i++)
	{
		if (arr[i] == 0) continue;
		for (int j = 2 * i; j <= num; j += i)
		{
			arr[j] = 0;
		}
	}

	for (int i = 2; i <= num; i++)
	{
		if (arr[i] != 0) printf("%d ", arr[i]);
	}


}
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, rt, cnt = 0;

	while (1) {
		cin >> n;
		if (!n)	//0 입력시 종료
			break;

		for (int i = n + 1; i <= 2 * n; i++) {
			rt = sqrt(i);
			if (rt == 1 && i != 1) {	//2,3인 경우
				cnt++;
				continue;
			}
			if (i % 2) {	//홀수일 경우
				for (int j = 2; j <= rt; j++) {
					if (!(i%j))
						break;
					if (j == rt) {
						cnt++;
					}
				}
			}
		}
		cout << cnt << '\n';
		cnt = 0;
	}
}
