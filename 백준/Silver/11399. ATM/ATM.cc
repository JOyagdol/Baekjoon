#include <iostream>
#include <algorithm>

using namespace std;
int n;
int p[1001];

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	int sum = 0, p_time = 0;
	for (int i = 0;i < n;i++) {
		cin >> p[i];
	}
	sort(p, p + n);
	for (int i = 0;i < n;i++) {
		p_time += p[i];
		sum += p_time;
	}
	cout << sum;
}