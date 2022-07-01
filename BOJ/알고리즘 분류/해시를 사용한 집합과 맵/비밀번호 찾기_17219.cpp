#include <iostream>
#include <vector>    
#include <string>
#include <unordered_map>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N,M;
	cin >> N >> M;
	
	unordered_map<string,string> m;
	string site, pwd;
	for(int i=0; i<N; i++){
		cin >> site >> pwd;
		m[site]=pwd;		
	}
	
	for(int i=0; i<M; i++){
		string site2;
		cin >> site2;
		cout << m[site2] << "\n";		
	}
}
