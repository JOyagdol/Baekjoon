#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n;
priority_queue<int, vector<int>, greater<int>> pQ;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		int num;
		cin >> num;
		if (num == 0) {
			if (pQ.empty()) cout << 0 << "\n";
			else {
				cout << pQ.top() << "\n";
				pQ.pop();
			}
		}
		else pQ.push(num);
	}	

}