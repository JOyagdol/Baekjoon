#include <iostream>
#include <cstring>
using namespace std;

int tc;
bool cabbage[51][51];
bool visit[51][51];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int m, n, k;

bool dfs(int y, int x) {
	if (visit[y][x]) return false;
	visit[y][x] = true;

	for (int i = 0;i < 4;i++) {
		int next_x = x + dx[i];
		int next_y = y + dy[i];
		if (next_x >= 0 && next_y >= 0 && next_x < m && next_y < n && cabbage[next_y][next_x]) dfs(next_y, next_x);
	}
	return true;

}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> tc;
	for (int t = 0; t < tc;t++) {
		cin >> m >> n >> k;
		memset(cabbage, 0, sizeof(cabbage));
		memset(visit, 0, sizeof(visit));

		int x, y,cnt=0;
		for (int i = 0;i < k;i++) {
			cin >> x >> y;
			cabbage[y][x] = 1;
		}
		for (int i = 0;i < n;i++) {
			for (int j = 0;j < m;j++) {
				if (cabbage[i][j] && !visit[i][j]) {
					if (dfs(i, j)) cnt++;
				}
			}
		}
		cout << cnt << "\n";
	}
	
}