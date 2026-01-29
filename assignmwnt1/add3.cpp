#include <iostream>
using namespace std;


// T.C: O(N) where N is the size of the array
// S.C: O(1)
int findSumLast2(int arr[], int n){

    if(n<2){
        return -1; // Not enough elements
    }

    int min = arr[0];
    int max = arr[0];

    for(int i = 1; i < n; i++){

        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return min + max;
}

int main(){

    return 0;
}