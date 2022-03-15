#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
        
    int T;
    cin >> T;
      
    int a, b;
    
    for(int i=0; i<T; i++){
        cin >> a >> b;       
        cout << a+b << "\n";      
    } 
}
