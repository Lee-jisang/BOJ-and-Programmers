



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
