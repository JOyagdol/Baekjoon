#include <iostream>
#include <set>
#include <string>
using namespace std;

int n, m;
set<string> names;
set<string> dbj;
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int cnt = 0;
	cin >> n >> m;
	string name;
	for (int i = 0;i < n;i++) {
		cin >> name;
		names.insert(name);
	}
	for (int i = 0;i < m;i++) {
		cin >> name;
		if (names.find(name) != names.end()) {
			dbj.insert(name);
		}
	}
	cout << dbj.size() << "\n";
	for (auto iter = dbj.begin();iter != dbj.end();iter++) {
		cout << *iter << "\n";
	}
	
}