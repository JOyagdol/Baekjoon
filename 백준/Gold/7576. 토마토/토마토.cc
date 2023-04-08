#include <iostream>
#include <vector>
#include <queue>;

using namespace std;
int n, m, result;
int dx[] = { 1,0,-1,0 };
int dy[] = { 0,1,0,-1 };

struct tomato {
	int y, x;
};

queue<tomato> q;

int g[1001][1001];

void bfs() {
	while (!q.empty()) {
		int y = q.front().y;
		int x = q.front().x;
		q.pop();
		for (int i = 0;i < 4;i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (0 <= nx && 0 <= ny && nx < m && ny < n && g[ny][nx] == 0) {
				g[ny][nx] = g[y][x] + 1;
				q.push({ ny,nx });
			}
		}
	}

}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> m >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> g[i][j];
			if (g[i][j] == 1) q.push({ i,j });
		}
	}
	bfs();
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			if (g[i][j] == 0) {
				cout << -1 << "\n";
				return 0;
			}
			if (result < g[i][j]) result = g[i][j];
		}
	}
	cout << result - 1;
}