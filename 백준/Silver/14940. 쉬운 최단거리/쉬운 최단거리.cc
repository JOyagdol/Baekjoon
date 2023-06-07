#include <iostream>
#include <queue>
#include <utility>

using namespace std;
int g[1000][1000];
int d[1000][1000];
bool visited[1000][1000];
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int n, m;
int g_x, g_y;
int cnt = 1;
void bfs(int s_x, int s_y) {
	queue < pair<int, int>> q;
	q.push(make_pair(s_x, s_y));
	visited[s_x][s_y] = true;
	int q_len = 1;
	d[s_x][s_y] = 0;
	pair<int, int> p;
	while (!q.empty()) {
		p = q.front();
		q.pop();
		q_len--;

		for (int i = 0;i < 4;i++) {
			int n_x = p.first + dx[i];
			int n_y = p.second + dy[i];
			if (n_x >= 0 && n_x <= n && n_y >= 0 && n_y <= m && !visited[n_x][n_y] && g[n_x][n_y] != 0) {
				q.push(make_pair(n_x,n_y));
				visited[n_x][n_y] = true;
				d[n_x][n_y] = cnt;
			}
		}
		if (q_len == 0) {
			cnt++;
			q_len = q.size();
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	int tmp;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> tmp;
			if (tmp == 2) {
				g_x = i; g_y = j;
				g[i][j] = 1;
			}
			g[i][j] = tmp;
		}
	}

	bfs(g_x, g_y);
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			if (g[i][j] == 1 && visited[i][j] == 0) {
				d[i][j] = -1;
			}
		}
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cout << d[i][j] << " ";
		}
		cout << "\n";
	}
}
