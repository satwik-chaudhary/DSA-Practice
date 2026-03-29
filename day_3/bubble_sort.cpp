#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    int temp;

    for(int i=0; i < n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if( arr[j] > arr[j+1] ) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    vector<int> arr = {14,33,27,35,10};
    bubbleSort(arr);
    for(int i : arr)
    cout << i << " ";
}