#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> nearestSmallerElement(vector<int> A) {
    int n = A.size();
    vector<int> G(n, -1);
    stack<int> s;

    for (int i = 0; i < n; i++) {
        while (!s.empty() && A[s.top()] >= A[i]) {
            s.pop();
        }

        if (!s.empty()) {
            G[i] = A[s.top()];
        }

        s.push(i);
    }

    return G;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> A(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    vector<int> G = nearestSmallerElement(A);

    cout << "Nearest smaller element for each element: ";
    for (int i = 0; i < n; i++) {
        cout << G[i] << " ";
    }
    cout << endl;

    return 0;
}