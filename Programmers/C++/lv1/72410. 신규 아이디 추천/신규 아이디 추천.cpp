#include <string>
#include <vector>
#include <regex>
using namespace std;

string solution(string new_id) {
    
    for(int i=0; i<new_id.length(); i++){
        new_id[i]=tolower(new_id[i]);      
    }
    
    new_id = regex_replace( new_id , regex("[^a-z0-9-_.]+"), "" );
    
    while (new_id.find("..") != string::npos)  //..가 없을때까지	
			new_id = regex_replace(new_id, regex("\\.\\."), "."); //정규식에 맞춰줘야함
    
    if(new_id[0] == '.'){
        new_id.erase(0,1);
    }
    if(new_id[new_id.length()-1]=='.'){
        new_id.erase(new_id.length()-1,1);
    }
    
    if(new_id=="")
        new_id="a";
    
    if(new_id.length() >=16 ){
        new_id.erase(15,new_id.length()-15);
        if(new_id[new_id.length()-1]=='.'){
            new_id.erase(new_id.length()-1,1);
        }
    }
    
    if(new_id.length() <=2){
        while(new_id.length()<3){
            new_id.insert(new_id.end()-1,new_id[new_id.length()-1]);
        }
    }
        
    string answer = new_id;
    return answer;
}
