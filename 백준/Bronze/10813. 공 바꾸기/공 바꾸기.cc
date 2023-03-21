#include <iostream>

using namespace std;
int n, m;
int basket[101];
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for (int i = 1;i <= n;i++) {
		basket[i] = i;
	}
	int x, y;
	for (int i = 0;i < m;i++) {
		cin >> x >> y;
		int tmp;
		tmp = basket[x];
		basket[x] = basket[y];
		basket[y] = tmp;
	}
	for (int i = 1;i <= n;i++) {
		cout << basket[i] << " ";
	}

}