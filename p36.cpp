#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        // The optimal answer is the maximum element because Turtle can eventually move it to the front
        cout << *max_element(a.begin(), a.end()) << endl;
    }
    return 0;
}
