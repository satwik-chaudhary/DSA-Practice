#include <iostream>
using namespace std;

int sumTopTwo(int arr[], int n) {
    int max1 = -1, max2 = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2) {
            max2 = arr[i];
        }
    }

    return max1 + max2;
}

int main() {
    int test;
    cin >> test;

    while(test--) {
        int alice[3], bob[3];

        for(int i = 0; i < 3; i++)
            cin >> alice[i];

        for(int i = 0; i < 3; i++)
            cin >> bob[i];

        int a = sumTopTwo(alice, 3);
        int b = sumTopTwo(bob, 3);

        if(a > b)
            cout << "Alice\n";
        else if(b > a)
            cout << "Bob\n";
        else
            cout << "Tie\n";
    }
}