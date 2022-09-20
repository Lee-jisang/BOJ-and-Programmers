#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

string solution(string s) {
    vector<int> v;
    for(int i=0; i<s.length(); i++){
        if('A' <= s[i] && s[i] <= 'Z'){
            s[i] = char(s[i]+32);
        }
        if(s[i]==' '){
            v.push_back(i);
        }
    }

    string answer = "";    
    stringstream ss(s);
    ss.str(s);

    string word;
    while(ss >> word) {
        //cout << word[0] << " ";
        if('a' <= word[0] && word[0] <= 'z'){
            cout << char(word[0]-32) << " ";
            word[0]= char(word[0]-32);  
            answer += word;
        }else{
            answer += word;
        }
        
    }
    //answer.pop_back();
    for(int i=0; i<v.size(); i++){
        answer.insert(v[i]," ");
     
    } 
    return answer;
}
