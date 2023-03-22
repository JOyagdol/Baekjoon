#include <iostream>
#include <map>

using namespace std;
int n, m;
map<string, string> netpw;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		string net, pw;
		cin >> net >> pw;
		netpw.insert(make_pair(net, pw));
	}
	for (int i = 0;i < m;i++) {
		string net;
		cin >> net;
		cout << netpw[net] << "\n";
	}
}