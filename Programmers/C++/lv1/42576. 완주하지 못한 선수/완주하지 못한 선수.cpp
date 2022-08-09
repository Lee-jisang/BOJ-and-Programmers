#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

//시간초과
// string solution(vector<string> participant, vector<string> completion) {
//     for (int i = 0; i < completion.size(); i++) {
//         if (find(participant.begin(), participant.end(), completion[i]) != participant.end()) {
//             participant.erase(participant.begin() + (find(participant.begin(), participant.end(), completion[i]) - participant.begin()));
//         }
//     }
//     return participant[0];
// }
string solution(vector<string> participant, vector<string> completion) {
    map<string,int> m;
    string answer="";
    for(int i=0; i<participant.size(); i++){
        m[participant[i]]+=1; 
    }
    for(int i=0; i<completion.size(); i++){
        m[completion[i]]-=1;
    }
    for(auto it=m.begin(); it!=m.end(); it++){
        if(it->second==1){
            answer= it->first;
        }
    }
    return answer;
}