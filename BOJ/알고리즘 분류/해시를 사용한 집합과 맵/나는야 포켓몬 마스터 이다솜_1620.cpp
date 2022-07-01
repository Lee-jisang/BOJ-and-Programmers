// 시간초과 풀이
#include <iostream>
#include <vector>    
#include <string>
#include <typeinfo>
using namespace std;

int main(){
	int N, M;// N과 M은 1보다 크거나 같고, 100,000보다 작거나 같은 자연수
	cin >> N >> M;
	
	vector<pair<string,string>> v;
	string name;
	for(int i=1; i<= N; i++){
		cin >> name;
		v.push_back({name,to_string(i)});
	}
	string Q;
	for(int i=0; i<M; i++){
		while(cin >> Q){
			char q = Q[0];
			if(isdigit(q)==true){ //도감번호가 입력으로 들어왔을때 
				for(int j=0; j<N; j++){
					if(v[j].second==Q){
						cout << v[j].first << "\n";
						break;
					}	
				}
			} else{
				for(int j=0; j<N; j++){
					if(v[j].first==Q){
						cout << v[j].second << "\n";
						break;
					}	
				}
			}
		}	
	}	
}

//unordered_map과 cin.tie의 중요성
#include <iostream>
#include <vector>    
#include <string>
#include <unordered_map>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;// N과 M은 1보다 크거나 같고, 100,000보다 작거나 같은 자연수
	cin >> N >> M;
	unordered_map<string, int> m;
	unordered_map<int, string> m2;
	string name;
	for(int i=1; i<= N; i++){
		cin >> name;
		m[name]=i;
		m2[i]=name; 
	}	
	string Q;
	for(int i=1; i<= M; i++){
		while(cin >> Q){
			if(isdigit(Q[0])==true){
				cout << m2[stoi(Q)] << "\n";
			}else{
				cout << m[Q] << "\n";
			}			
		}		
	}
}
