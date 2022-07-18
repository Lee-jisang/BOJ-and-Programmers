#include <iostream>
#include <queue>
using namespace std;

int paper[101][101];
int visit[101][101]; // 방문표시
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {



	int M, N, K;
	cin >> M >> N >> K;
	/*int paper1[M][N];*/

	int x1, y1,x2,y2;
	for (int i = 0; i < K; i++) {	
		cin >> x1 >> y1 >> x2 >> y2;
		/*cout << x1 <<  " " <<M - y1 << " " << x2 << " " << M - y2 << "\n";*/
		cout << M - y1 - 1 << " " << x1 << " " << M - y2 << " " << x2 - 1 << "\n";

		if (x1 == x2 - 1 && M - y1 - 1 == M - y2) {
			paper[M - y1 - 1][x1] = 1;
		}
		else if (x1 == x2 - 1) {
			for (int k = M - y2; k <= M - y1 - 1; k++) {
				paper[k][x1] = 1;
			}
		}
		else if (M - y1 - 1 == M - y2) {
			for (int k = x1; k <= x2 - 1; k++)
				paper[M - y1 - 1][k] = 1;
		}
		else {//둘다 다를때
			for (int k = M - y2; k <= M - y1 - 1; k++) {
				for (int l = x1; l <= x2 - 1; l++) {
					paper[k][l] = 1;
				}
			}
		}	
	}

	//for (int i = 0; i < M; i++) {
	//	for (int j = 0; j < N; j++) {
	//		cout << paper[i][j];
	//	}
	//	cout << "\n";
	//}





	//visit[0][0] = 1; // 방문표시

	//queue<pair<int, int> > q; // 큐 생성
	//q.push(make_pair(0, 0)); // 시작점 넣기

	//while (!q.empty()) // 큐에 데이터가 없을때까지
	//{
	//	int x = q.front().first;
	//	int y = q.front().second;

	//	q.pop(); // 큐 맨 앞 데이터 제거

	//	for (int i = 0; i < 4; i++)
	//	{
	//		int next_x = x + dx[i];
	//		int next_y = y + dy[i];

	//		if (0 <= next_x && next_x < N && 0 <= next_y && next_y < M) // 미로의 범위
	//		{
	//			// 길이 존재하고 이전에 방문했던적이 없는 경우
	//			if (paper[next_x][next_y] == 0 && visit[next_x][next_y] == 0)
	//			{				
	//				visit[next_x][next_y] = 1;
	//				q.push(make_pair(next_x, next_y)); // 큐에 데이터 밀어넣기
	//			}

	//		}

	//	}
	//}





}
