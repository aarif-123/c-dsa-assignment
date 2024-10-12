#include <iostream>
#include <unordered_map>
#include <queue>
#include <string>
using namespace std;

string frequencySort(string s) {
    unordered_map<char, int> freq;
    
    for (char c : s) {
        freq[c]++;
    }
    
    priority_queue<pair<int, char>> pq;
    
    for (auto it : freq) {
        pq.push({it.second, it.first});
    }p34.c0p
    
    string result = "";
    
    while (!pq.empty()) {
        auto [count, ch] = pq.top();
        pq.pop();
        result.append(count, ch);
    }
    
    return result;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    string sortedString = frequencySort(s);
    cout << "Sorted string based on frequency: " << sortedString << endl;
    
    return 0;
}
