// 틀린 첫번째 풀이 이렇게 하면 모든경우의 수가 고려가 안됨 조합으로 풀어야되나
// key  value
// 1     5,6,7
// 2     1,4
// 3     1

// 1개입는경우: 3C1+2C1+1C1->6
// 2개입는경우: 3C1*2C1 + 2C1*1C1 + 3C1*1C1->6+2+3=11
// 3개입는경우: 3C1*2C1*1C1->6

#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;	
	
	for(int i=0; i<T; i++){
		int n;
		map<string, set<string>> m;
		int cnt=0;
		cin >> n;
		for(int j=0; j<n; j++){
			string clothe;
			string keyclothe;
			cin >> clothe >> keyclothe;
			m[keyclothe].insert(clothe);
			cnt++; //1가지 옷입는 경우 
			
		}
		int mul =1;
		for (auto iter = m.begin(); iter != m.end(); ++iter) {
			mul *= m[iter->first].size();
		}
		
		if(m.size()==1){
			cout << cnt << "\n";
		}
		else{
			cout << mul+cnt << "\n";
		}
		
				
	}


}



// https://nanyoungkim.tistory.com/160
// 가짓수를 하나씩늘려서 곱하면 됨 
// key  value
// 1     3
// 2     2
// 3     1

// 1개입는경우: 3C1+2C1+1C1->6
// 2개입는경우: 3C1*2C1 + 2C1*1C1 + 3C1*1C1->6+2+3=11
// 3개입는경우: 3C1*2C1*1C1->6

#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;	
	
	for(int i=0; i<T; i++){
		int n;
		map<string, set<string>> m;
		int cnt=0;
		cin >> n;
		for(int j=0; j<n; j++){
			string clothe;
			string keyclothe;
			cin >> clothe >> keyclothe;
			m[keyclothe].insert(clothe);
			cnt++; //1가지 옷입는 경우 			
		}
		int mul =1;
		for (auto iter = m.begin(); iter != m.end(); ++iter) {
			mul *= (m[iter->first].size()+1);
		}
		mul = mul - 1;
		
		if(n==0) cout << 0 << "\n";
		else cout << mul << "\n";
		
				
	}


}
