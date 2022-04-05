/*
문제
상근이는 2863번에서 표를 너무 열심히 돌린 나머지 5와 6을 헷갈리기 시작했다.
상근이가 숫자 5를 볼 때, 5로 볼 때도 있지만, 6으로 잘못 볼 수도 있고, 6을 볼 때는, 6으로 볼 때도 있지만, 5로 잘못 볼 수도 있다.
두 수 A와 B가 주어졌을 때, 상근이는 이 두 수를 더하려고 한다. 이때, 상근이가 구할 수 있는 두 수의 가능한 합 중, 최솟값과 최댓값을 구해 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 두 정수 A와 B가 주어진다. (1 <= A,B <= 1,000,000)

출력
첫째 줄에 상근이가 구할 수 있는 두 수의 합 중 최솟값과 최댓값을 출력한다.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string A,B;

    cin >> A >> B; // (1 <= A,B <= 1,000,000)

 
    //A와 B의 문자열에서 5,6 문자가 없으면 최솟값이랑 최댓값이 A+B
    //5,6이 있으면 5가 들어있는 문자는 다 6으로 바꾸고, 6은 5로 다바꾸자.
    if (A.find("5") == string::npos && A.find("6") == string::npos && B.find("5") == string::npos && B.find("6") == string::npos) //문자열에서 특정문자 5,6이 없으면
        cout << stoi(A) + stoi(B) << " " << stoi(A) + stoi(B);  
    else {
        for (int i = 0; i < A.length(); i++) {
            if (A[i] == '6')
                A[i] = '5';
        }
        for (int i = 0; i < B.length(); i++) {
            if (B[i] == '6') 
                B[i] = '5';
        }          
        cout << stoi(A) + stoi(B) <<" ";//최솟값

        for (int i = 0; i < A.length(); i++) {
            if (A[i] == '5') 
                A[i] = '6';
        }          
        for (int i = 0; i < B.length(); i++) {
            if (B[i] == '5') 
                B[i] = '6';
        }
        cout << stoi(A) + stoi(B);//최댓값

    }
   
 
}


#include <iostream>
#include <string>
using namespace std;

int main() {
    string A,B;

    cin >> A >> B; // (1 <= A,B <= 1,000,000)

 
    //A와 B의 문자열에서 5,6 문자가 없으면 최솟값이랑 최댓값이 A+B
    //5,6이 있으면 5가 들어있는 문자는 다 6으로 바꾸고, 6은 5로 다바꾸자.
    if (A.find("5") == string::npos && A.find("6") == string::npos && B.find("5") == string::npos && B.find("6") == string::npos) //문자열에서 특정문자 5,6이 없으면
        cout << stoi(A) + stoi(B) << " " << stoi(A) + stoi(B);  
    else {
        for (int i = 0; i < A.length(); i++) {
            if (A[i] == '6') 
                A.replace(i, 1, "5");                               
        }           
        for (int i = 0; i < B.length(); i++) {
            if (B[i] == '6') 
                B.replace(i, 1, "5");
        }          
        cout << stoi(A) + stoi(B) <<" ";//최솟값

        for (int i = 0; i < A.length(); i++) {
            if (A[i] == '5') 
                A.replace(i, 1, "6");
        }          
        for (int i = 0; i < B.length(); i++) {
            if (B[i] == '5') 
                B.replace(i, 1, "6");
        }
        cout << stoi(A) + stoi(B);//최댓값

    }
   

  

 
}
