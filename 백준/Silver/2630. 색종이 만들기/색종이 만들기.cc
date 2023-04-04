#include <iostream>
using namespace std;

int w_paper, b_paper;
int n;
int c_paper[128][128];

void create_paper(int y, int x, int size) {
	int ch = c_paper[y][x];
	for (int i = y;i < y + size;i++) {
		for (int j = x;j < x + size;j++) {
			if (ch == 0 && c_paper[i][j] == 1) ch = 2;
			else if (ch == 1 && c_paper[i][j] == 0) ch = 2;
			if (ch == 2) {
				create_paper(y, x, size / 2);
				create_paper(y, x + size / 2, size / 2);
				create_paper(y + size / 2, x, size / 2);
				create_paper(y + size / 2, x + size / 2, size / 2);
				return;
			}
 		}
	}
	if (ch == 0) w_paper++;
	else b_paper++;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cin >> c_paper[i][j];
		}
	}
	create_paper(0,0,n);
	cout << w_paper << "\n";
	cout << b_paper << "\n";
}