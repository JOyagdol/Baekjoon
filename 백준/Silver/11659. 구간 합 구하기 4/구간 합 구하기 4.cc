#include <iostream>

using namespace std;

int n, m;
int num[100001];
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for (int i = 1;i <= n;i++) {
		int tmp = 0;
		cin >> tmp;
		num[i] = tmp + num[i - 1];
	}
	for (int i = 0;i < m;i++) {
		int sum = 0, x, y;;
		cin >> x >> y;
		sum = num[y] - num[x - 1];
		cout << sum << "\n";
	}
}