#include <iostream>
#include <vector>
#include <vector>
#include <ctime>
using namespace std;

vector<int> bubbleSort(vector<int> array){
    for(int i = 0; i < array.size(); i++){
        for(int j = 0; j < array.size() - 1; j++){
            if(array[j] > array[j+1]){
                swap(array[j], array[j+1]);
            }
        }
    }
    return array;
}

vector<int> selectionSort(vector<int> array){
    int n = array.size();
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }
        swap(array[i], array[min_index]);
    }
    return array;
}

time_t getTimestamp() {
    return time(NULL);
}

string getAuthors() {
    return "Peter Magdik & Radovan Psotny";
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