#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int st, int mid, int end) {
    vector<int> temp(end-st+1);
    int i=st, j=mid+1, l=0;

    while(i<=mid && j<=end) {
        if(arr[i] < arr[j]) {
            temp[l] = arr[i];
            i++;
        }

        else {
            temp[l] = arr[j];
            j++;
        }
        l++;
    }
    while(i<=mid) {
        temp[l] = arr[i];
        l++; i++;
    }
    while(j<=end) {
        temp[l] = arr[j];
        l++; j++;
    }
    for(int x = 0; x < temp.size(); x++) 
        arr[st + x] = temp[x];
}

void mergeSort(vector<int>& arr,int start,int end) {
    if(start >= end) return;

    int mid = start + (end - start)/2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);

    merge(arr, start, mid, end);
}

int main() {
    vector<int> arr = {12,35,31,8,32,17};

    mergeSort(arr,0,arr.size()-1);

    for(int i : arr)
        cout << i << " ";
}
