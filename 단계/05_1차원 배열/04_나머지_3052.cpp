/*
문제
두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다. 
수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.

입력
첫째 줄부터 열번째 줄 까지 숫자가 한 줄에 하나씩 주어진다. 이 숫자는 1,000보다 작거나 같고, 음이 아닌 정수이다.

출력
첫째 줄에, 42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력한다.
*/

//후위연산의 이해: 다음줄에 +1되는 것임
#include <iostream>
using namespace std;
int main(void) {
    int a[5] = { 1,2,3,4,5 };

    for(int i = 0; i < 5; i++)
        cout << a[i]++ << "";  //12345

    cout << "\n";

    for (int i = 0; i < 5; i++)
        cout << a[i] << "";    //23456
}


#include <iostream>
int main(void){
    int num, sum = 0, remainderArr[42] = {0,};
    for(int i = 0; i < 10; i++){
        std::cin>>num;
        if(!(remainderArr[num % 42]++))//후에 증가되는것임 다음줄에
            sum++; //이때 증가되는것임
            
    }
    std::cout<<sum;
}


#include <iostream>
 
using namespace std;
 
int main(int argc, const char * argv[]) {
 
	/*
	  0으로 초기화를 해주어야 한다.
	  bool 배열을 활용 할 경우 bool count[42] = {false} 이런식으로
	  초기화 해줄 수 있다.
	 */
	int count[42] = {};	
	
	int v;
	for(int i = 0; i < 10; i++) {
		cin >> v;
		// 입력 받은 수를 42로 나눈 나머지 인덱스의 값을 증가시킨다.
		count[v % 42]++;	
	}
 
	int result = 0;
	/*
	  배열을 순회하면서 적어도 한 번 이상 나온 경우에는
	  result 값을 증가시킨다. (서로 다른 수를 세기 위함)
	 */
	for(int v : count) {
		if(v > 0) {		
			result++;
		}
	}
	cout << result;
 
	return 0;
 
 
}
