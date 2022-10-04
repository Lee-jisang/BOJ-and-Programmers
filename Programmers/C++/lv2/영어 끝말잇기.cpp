#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <iostream>
using namespace std;

//했던 단어 또말하는경우->map 이용
//끝단어랑 첫단어글자가 일치하지 않는경우
//0,0 인경우

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    map<string,bool> m;
    
    //했던 단어 또말하는경우->map 이용
    for(int i=0; i<words.size(); i++){

        if (m.find(words[i]) != m.end()) {
            answer.push_back(i%n+1);
            answer.push_back(i/n+1);
            return answer;
        }
        else {
	        m[words[i]]=true;
        }   
    }
    
    //끝단어랑 첫단어글자가 일치하지 않는경우
    for(int i=0; i<words.size()-1; i++){
        if(words[i][words[i].length()-1]==words[i+1][0])
            continue;
        else{
            answer.push_back((i+1)%n+1);
            answer.push_back((i+1)/n+1);
            return answer;
        }         
    }
    
    answer.push_back(0);
    answer.push_back(0);
    return answer;
}
