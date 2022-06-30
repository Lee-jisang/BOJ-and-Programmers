#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    unordered_map<string, unordered_set<string>> reportHash;
    unordered_map<string, unordered_set<string>> resultHash;
    
    for(string r : report) {
        int pos = r.find(' '); //공백기준으로 
        string user = r.substr(0,pos); 
        string bad = r.substr(pos+1);
        reportHash[user].insert(bad);
        resultHash[bad].insert(user);
    }
    
    vector<int> answer(id_list.size());
    
    for(int i=0; i<id_list.size(); i++){
        string user = id_list[i];
        auto it = reportHash.find(user);
        if (it == reportHash.end()) continue;
        
        for(string bad: it->second) {
            if (resultHash[bad].size() >= k){ // cout << i << " " << bad << "\n"; 
                answer[i]++;
            }
        }
        
    }
        
    return answer;
}
//용자의 ID가 담긴 문자열 배열 id_list, 각 이용자가 신고한 이용자의 ID 정보가 담긴 문자열 배열 report, 정지 기준이 되는 신고 횟수 k가 매개변수로 주어질 때
