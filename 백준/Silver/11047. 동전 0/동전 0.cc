#include <iostream>

using namespace std;
int n, k;
int money[11];
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> k;
	for (int i = 0;i < n;i++) {
		cin >> money[i];
	}
	int cnt = 0;
	for (int i = n - 1;i >= 0;i--) {
		cnt += k / money[i];
		k = k % money[i];
	}
	cout << cnt;
}