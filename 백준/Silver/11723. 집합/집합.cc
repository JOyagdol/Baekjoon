#include <iostream>

using namespace std;

int n;
int s[21];
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0;i < n;i++) {
		string command;
		int num;
		cin >> command;
		if (command == "add") {
			cin >> num;
			if (s[num] == 0) {
				s[num] = 1;
			}
		}
		else if (command == "remove") {
			cin >> num;
			if (s[num] == 1) {
				s[num] = 0;
			}
		}
		else if (command == "check") {
			cin >> num;
			if (s[num] == 1) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (command == "toggle") {
			cin >> num;
			if (s[num] == 1) {
				s[num] = 0;
			}
			else {
				s[num] = 1;
			}
		}
		else if (command == "all") {
			for (int j = 1;j <= 20;j++) {
				s[j] = 1;
			}
		}
		else if (command == "empty") {
			for (int j = 1;j <= 20;j++) {
				s[j] = 0;
			}
		}
	}
}