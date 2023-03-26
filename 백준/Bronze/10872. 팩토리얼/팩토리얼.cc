#include <iostream>
using namespace std;

int n;
int fact(int f) {
    if (f == 0) return 1;
    return f * fact(f - 1);
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    int result = fact(n);
    cout << result;
}