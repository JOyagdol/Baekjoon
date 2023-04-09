#include <iostream>
#include <set>

using namespace std;

int tc, n;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> tc;
	
	for (int t = 0;t < tc;t++) {
		cin >> n;
		string command;
		int num;
		multiset<int> ms;
		for (int i = 0;i < n;i++) {
			cin >> command >> num;
			if (command == "I") {
				ms.insert(num);
			}
			else if (command == "D" && num == 1) {
				if (!ms.empty()) {
					auto iter = ms.end();
					iter--;
					ms.erase(iter);
				}
			}
			else if (command == "D" && num == -1) {
				if (!ms.empty()) ms.erase(ms.begin());
			}
		}
		if (ms.empty()) cout << "EMPTY" << "\n";
		else {
			auto end_iter = ms.end();
			end_iter--;
			cout << *end_iter << ' ' << *ms.begin() << '\n';
		}
	}
}