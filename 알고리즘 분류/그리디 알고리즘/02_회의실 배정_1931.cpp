//틀린 풀이,, 재귀나 함수를 이용하면 풀릴수도, 접근이 잘못된걸 수도 있음
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;// N(1 ≤ N ≤ 100,000)


	vector<pair<int, int>> v;

	int start, end;

	for (int i = 0; i < N; i++) {	
		cin >> start >> end;
		v.push_back(pair<int, int>(start, end));


	}

	sort(v.begin(), v.end());

	cout << "\n";

	for (int i = 0; i < N; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}
	
	cout << "\n";

	
	for (int i = 0; i < N-1; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
		for (int j = 1; j < N; j++) {
			if (v[i].second <= v[j].first) {
				cout << v[j].first << " " << v[j].second << "\n";
				
				for(int k=j; k<N; k++){
					if (v[j].second <= v[k].first)
						cout << v[k].first << " " << v[k].second << "\n";
				
				}			
			}
		}
		cout << "\n";	
	}
}

//맞는 풀이
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;// N(1 ≤ N ≤ 100,000)


	vector<pair<int, int>> v;

	int start, end;

	for (int i = 0; i < N; i++) {	
		cin >> start >> end;
		v.push_back(pair<int, int>(end, start));//뒤집어서 넣고


	}

	sort(v.begin(), v.end());

	int savetime = 0, ans = 0;
	for (int i = 0; i < N; i++) {
		if (savetime <= v[i].second) {//
			savetime = v[i].first;
			ans++;
		}
	}
	cout << ans;
}
