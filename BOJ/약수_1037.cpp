/*
문제:양수 A가 N의 진짜 약수가 되려면, N이 A의 배수이고, A가 1과 N이 아니어야 한다. 어떤 수 N의 진짜 약수가 모두 주어질 때, N을 구하는 프로그램을 작성하시오.

입력:첫째 줄에 N의 진짜 약수의 개수가 주어진다. 이 개수는 50보다 작거나 같은 자연수이다. 둘째 줄에는 N의 진짜 약수가 주어진다.
1,000,000보다 작거나 같고, 2보다 크거나 같은 자연수이고, 중복되지 않는다.

출력:첫째 줄에 N을 출력한다. N은 항상 32비트 부호있는 정수로 표현할 수 있다.
*/

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int num = 0; //약수의 개수 변수
	cin >> num;

	int* array = new int[num]; //동적 배열 선언, 진짜 약수의 개수만큼 배열길이 설정

	for (int i = 0; i < num; i++)
	{
		cin >> array[i];
	}

	sort(array, array + num); //오름 차순 정렬, 순서대로 입력했다면 굳이 안해도됨

	cout << array[0] * array[num - 1]; //배열의 처음과 끝값
}

