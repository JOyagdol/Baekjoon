#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n, m, s_cnt;
vector<int> g[1001];
bool v[1001];

void dfs(int idx) {
	v[idx] = true;
	for (int i = 0;i < g[idx].size();i++) {
		if (v[g[idx][i]] == false) {
			dfs(g[idx][i]);
		}
	}
}
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0;i < m;i++) {
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	for (int i = 1;i <= n;i++) {
		if (v[i] == false) {
			dfs(i);
			s_cnt++;
		}
	}
	cout << s_cnt;
}