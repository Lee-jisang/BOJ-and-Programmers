#include <iostream>
using namespace std;

int main(){
    int year;
    cin >> year;
    if(year % 4 == 0)
        if(year % 100 != 0) || (year % 400 == 0)
            cout << 1; 
        else
            cout << 0;
    else //꼭 if문 else랑 짝을 지어주자
        cout << 0;
    return 0;
}
