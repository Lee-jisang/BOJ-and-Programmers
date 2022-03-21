#include <iostream>
#include <string>
using namespace std;

int main(){
    int T;
    cin >> T;
    int a,b;
    string s;
   
    for(int i; i<T; i++){
        int cnt=0;
        cin >> a >> b;
        for(int i=a; i<=b; i++){
            s=to_string(i);
            for(int j=0; j<s.length(); j++){
                if(s[j]=='0')
                    cnt++;
            }
        }
        cout << cnt << "\n";        
    }
}
