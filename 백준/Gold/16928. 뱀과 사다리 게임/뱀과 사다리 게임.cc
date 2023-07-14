#include <iostream>
#include <queue>
using namespace std;
int map[102] = { 0 };
bool visit[102] = { 0 };

void game(int x, int c) {
    queue<pair<int, int>> q;
    q.push(make_pair(x, c));
    while (!q.empty()) {
        int loc = q.front().first;
        int cnt = q.front().second;
        q.pop();

        for (int i = 1; i <= 6;i++) {
            int nx = loc + i;
            if (nx == 100) {
                cout << cnt + 1;
                return;
            }
            else if (nx < 100) { 
                while (map[nx] != 0) { 
                    nx = map[nx]; 
                }
                if (!visit[nx]) {
                    q.push(make_pair(nx, cnt + 1));
                    visit[nx] = true; 
                }

            }
        }
    }
}

int main() {
    int n, m, t1, t2;

    cin >> n >> m;
    for (int i = 0; i < n;i++) {
        cin >> t1 >> t2;
        map[t1] = t2; 
    }
    for (int i = 0; i < m;i++) {
        cin >> t1 >> t2;
        map[t1] = t2;
    }
    game(1, 0);
    return 0;
}
