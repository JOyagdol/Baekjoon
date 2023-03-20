#include <iostream>

using namespace std;
int m, n;
int basket[101];

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> m >> n;
	for (int i = 0;i < n;i++) {
		int a, b, c;
		cin >> a >> b >> c;
		for (a;a <= b;a++) {
			basket[a] = c;
		}
	}
	for (int i = 1;i <= m;i++) {
		cout << basket[i] << ' ';
	}
}