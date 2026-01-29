#include <iostream>
using namespace std;

// T.C: O(N log N) due to sorting
// S.C: O(N) for storing the sorted array
int specialty(int arr[], int n, int k) {

    vector<int> v(arr, arr + n);
    sort(v.begin(), v.end());

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int greaterCount = n - i - 1;  // elements strictly greater than v[i]

        if (greaterCount >= k) {
            sum += v[i];
        }
    }

    return sum;
}

int main(){

    return 0;
}