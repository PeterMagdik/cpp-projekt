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

int main() {


    return 0;
}