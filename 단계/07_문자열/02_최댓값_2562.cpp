/*
문제
N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.

출력
입력으로 주어진 숫자 N개의 합을 출력한다.
*/


#include <iostream>
#include <string>
using namespace std;

int main() {
    int N; //숫자의 개수
    cin >> N; //1<=N<=100

    string s;
    cin >> s;

    // stoi(s) 문자열을 정수로 변환 
    // s[i]-48, 문자단위(char)를 정수로 변환    
    int sum = 0;

    for (int i = 0; i < s.length(); i++) {
        sum= sum + (s[i] - 48);//문자단위 정수변환

    }
    cout << sum;

}
