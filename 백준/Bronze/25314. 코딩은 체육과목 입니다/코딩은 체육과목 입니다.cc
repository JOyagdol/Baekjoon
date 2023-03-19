#include <iostream>

using namespace std;

int n;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 4;i <= n;i+=4) {
		cout << "long ";
	}
	cout << "int";
}
