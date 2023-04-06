#include <iostream>
#include <queue>
using namespace std;
queue<pair<int, int>> q; 
bool visited[200001]; 
int N, K;

void dfs()
{
    q.push({ N,0 }); 
    visited[N] = 0;

    while (!q.empty()) {
        int pos = q.front().first;
        int time = q.front().second;
        q.pop();
        if (pos < 0 || pos > 100000) continue;
        if (pos == K) {
            cout << time; 
            break;
        }
        if (visited[pos * 2] == false) {
            visited[pos * 2] = true;
            q.push({ pos * 2, time + 1 }); 
        }
        if (visited[pos + 1] == false) {
            visited[pos + 1] = true;
            q.push({ pos + 1, time + 1 });
        }
        if (visited[pos - 1] == false) {
            visited[pos - 1] = true;
            q.push({ pos - 1, time + 1 });
        }

    }

}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> N >> K;
    dfs();
}