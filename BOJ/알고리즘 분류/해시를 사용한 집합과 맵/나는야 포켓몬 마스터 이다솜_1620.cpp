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
