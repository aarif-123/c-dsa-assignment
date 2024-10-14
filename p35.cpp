#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int max_gap = max(a[0], x - a[n - 1]);
        for (int i = 1; i < n; i++) {
            max_gap = max(max_gap, a[i] - a[i - 1]);
        }
        cout << max_gap << endl;
    }
    return 0;
}
