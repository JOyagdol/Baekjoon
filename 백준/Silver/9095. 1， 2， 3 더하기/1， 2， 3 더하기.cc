#include <iostream>

using namespace std;
int n;
int dp[11];
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4;i < 11;i++) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}
	int num;
	for (int i = 0;i < n;i++) {
		cin >> num;
		cout << dp[num] << "\n";
	}

}
