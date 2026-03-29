#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    int temp,min;

    for(int i=0; i<n-1; i++){
        min = i;
        for(int j=i+1; j<n; j++) {
            if(arr[i] > arr[j] )
            min = j;
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    vector<int> arr = {14,33,27,35,10};
    selectionSort(arr);
    for(int i : arr)
    cout << i << " ";
}