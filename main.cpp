#include <iostream>
#include <ctime>
using namespace std;

time_t getTimestamp() {
    return time(NULL);
}

void insertionSort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {2, 5, 7, 1, 3, 4, 0};
    insertionSort(arr, 7);
    
    return 0;
}