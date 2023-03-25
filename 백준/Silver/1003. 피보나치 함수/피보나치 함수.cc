#include <iostream>

using namespace std;
int tc;
int N;


int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> tc;
    for (int i = 0;i < tc;i++) {
        cin >> N;
        if (N == 0) cout << 1 << " " << 0 << "\n";
        else if (N == 1) cout << 0 << " " << 1 << "\n";
        else {
            int n_1 = 0, sum_1 = 1;
            int n_0 = 1, sum_0 = 0;
            for (int f = 1;f < N;f++) {
                int tmp_1 = sum_1;
                int tmp_0 = sum_0;
                sum_1 += n_1;
                sum_0 += n_0;
                n_1 = tmp_1;
                n_0 = tmp_0;
            }
            cout << sum_0 << " " << sum_1 << "\n";
        }
        
    }
}