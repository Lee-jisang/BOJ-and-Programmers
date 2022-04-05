/*
문제
상근이는 요즘 설탕공장에서 설탕을 배달하고 있다. 상근이는 지금 사탕가게에 설탕을 정확하게 N킬로그램을 배달해야 한다. 설탕공장에서 만드는 설탕은 봉지에 담겨져 있다. 봉지는 3킬로그램 봉지와 5킬로그램 봉지가 있다.
상근이는 귀찮기 때문에, 최대한 적은 봉지를 들고 가려고 한다. 예를 들어, 18킬로그램 설탕을 배달해야 할 때, 3킬로그램 봉지 6개를 가져가도 되지만, 5킬로그램 3개와 3킬로그램 1개를 배달하면, 더 적은 개수의 봉지를 배달할 수 있다.
상근이가 설탕을 정확하게 N킬로그램 배달해야 할 때, 봉지 몇 개를 가져가면 되는지 그 수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 N이 주어진다. (3 ≤ N ≤ 5000)

출력
상근이가 배달하는 봉지의 최소 개수를 출력한다. 만약, 정확하게 N킬로그램을 만들 수 없다면 -1을 출력한다.
*/

//잘푼거 같음 뿌듯// 그리디 알고리즘, 5의 배수의 합 3의 배수의 합으로 이루어진 수
#include<iostream>
using namespace std;

int main() {
	int N; //(3 ≤ N ≤ 5000)
	cin >> N; //kg	
	if (N == 4 || N == 7)
		cout << -1;

	for (int i = (N / 5); i >= 0; i--) { 
		if ((N - (5 * i)) % 3 == 0) {
			//cout << "5*" << i << "+" <<"3*"<< (N - (5 * i)) / 3 << "\n";
			cout << i + (N - (5 * i)) / 3 << "\n";
			break;
		}					
	}
}



/*
16
5*0 + 3*0   x
5*2 +       x
5*2 + 3*2 

18 
5*0 + 3*6
5*1 + 3*     x
5*2 + 3*     x
5*3 + 3*1


*/



/*
int a[4998] = { 0, };
int a3[1666] = { 0, };
int j = 0;

int a5[1000] = { 0, };
int k = 0;

int sum35[16];

for (int i = 3; i <= 5000; i++) {
	a[i-3] = i;
	if (i % 3 == 0)
		a3[j++] = i;
	if (i % 5 == 0)
		a5[k++] = i;
}

for (int i = 0; i < 1666; i++)
	cout << a3[i] << " ";

cout << "\n";

for (int i = 0; i < 1000; i++)
	cout << a5[i] << " ";


for (int i = 0; i < 1666; i++) {
	for (int j = 0; j < 1000; j++) {

		a3[i]+a5[j]
	}


}
*/
