#include <bits/stdc++.h>
using namespace std;

int longestGoodSubsequence(vector<int>& A) {
    unordered_map<int, int> freq;

    for (int x : A)
        freq[x]++;

    int ans = 0;

    for (auto it = freq.begin(); it != freq.end(); it++) {
        int x = it->first;
        int count = 0;

        for (int v = x; v <= x + 10; v++) {
            if (freq.count(v))
                count += freq[v];
        }

        ans = max(ans, count);
    }

    return ans;
}

int main() {
    vector<int> A = {1, 3, 5, 6, 9, 10, 12, 13, 14};
    cout << longestGoodSubsequence(A);
    return 0;
}

