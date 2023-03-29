#include <iostream>
#include <vector>
using namespace std;

vector<int> computer[101];
bool b[101];
int con, n, cnt;

void dfs(int idx) {
	b[idx] = true;
	for (int i = 0;i < computer[idx].size();i++) {
		if (b[computer[idx][i]] != true) {
			dfs(computer[idx][i]);
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	cin >> con;
	for (int i = 1;i <= con;i++) {
		int a, b;;
		cin >> a >> b;;
		computer[a].push_back(b);
		computer[b].push_back(a);
	}
	dfs(1);
	for (int i = 2;i <= 101;i++) {
		if (b[i] == true) cnt++;
	}
	cout << cnt;
}
