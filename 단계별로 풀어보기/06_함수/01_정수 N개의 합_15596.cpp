/*
문제
정수 n개가 주어졌을 때, n개의 합을 구하는 함수를 작성하시오.

작성해야 하는 함수는 다음과 같다.
*/

#include <iostream>
#include <vector> 
using namespace std;

long long sum(vector<int> &a) { //배열함수 호출법
	long long ans = 0;
    for(int i=0; i<a.size(); i++){ //vector는 length() 가 아니라 size()!
        ans = ans +a[i];
    }
	return ans;
}

int main() {

    vector<int> a = {1,2,3,4,5};
    cout << sum(a);

}
