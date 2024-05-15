#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

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

int main() {


    return 0;
}