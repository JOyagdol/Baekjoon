#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int n, m;
char campus[600][600];
bool visited[600][600];
int dx[4] = {0,1,0,-1};
int dy[4] = {1, 0,-1,0};
int g_x, g_y;

void bfs(int s_x, int s_y) {
	int cnt = 0;
	queue<pair<int, int>> q;
	q.push(make_pair(s_x, s_y));
	visited[s_x][s_y] = true;
	pair<int, int> p;
	while (!q.empty()) {
		p = q.front();
		q.pop();
		for (int i = 0;i < 4;i++) {
			int n_x = p.first + dx[i];
			int n_y = p.second + dy[i];
			if (n_x >= 0 && n_x < n && n_y >= 0 && n_y < m && !visited[n_x][n_y] && campus[n_x][n_y] != 'X') {
				q.push(make_pair(n_x, n_y));
				if (campus[n_x][n_y] == 'P') cnt++;
				visited[n_x][n_y] = true;
			}
		}
	}
	if (cnt != 0) {
		cout << cnt;
	}
	else {
		cout << "TT";
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	char tmp;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> tmp;
			if (tmp == 'I') {
				g_x = i; g_y = j;
			}
			campus[i][j] = tmp;
		}
	}

	bfs(g_x,g_y);
}