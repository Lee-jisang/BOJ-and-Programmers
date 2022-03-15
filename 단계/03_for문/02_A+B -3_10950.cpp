/*
문제
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 테스트 케이스의 개수 T가 주어진다.

각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

출력
각 테스트 케이스마다 A+B를 출력한다.
*/

//배열로 풀면 런타임에러 나옴 코드돌려보면 잘 나오긴함, 
//그리고 한번에 입력받은다음 한번에 출력하는 줄알았더니 한번입력하고 바로 출력되게해도 상관없다함
#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
      
    int a[10]={0,};
    int b[10]={0,};
    
    for(int i=0; i<T; i++)
        cin >> a[i] >> b[i];       
    
    for(int i=0; i<T; i++)
        cout << a[i]+b[i] << endl;
  
}


//그럼 배열 사용할 필요 없지...
#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
      
    int a, b;
    
    for(int i=0; i<T; i++){
        cin >> a >> b;       
        cout << a+b << endl;      
    } 
}
