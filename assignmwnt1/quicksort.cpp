#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (i <= high && arr[i] <= pivot)
            i++;
    
        while (arr[j] > pivot)
            j--;
    
        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);   
    return j;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int index = partition(arr, low, high);
        quicksort(arr, low, index - 1);
        quicksort(arr, index + 1, high);
    }
}

int main() {
    int arr[] = {4, 2, 6, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
