#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;

    for(int i = 0; i < test; i++)
    {
        int a=0;
        int b[3];
        cin >> b[0] >> b[1] >> b[2];
        for(int j=0; j<=2; j++){
            if(b[j] == 0)
            a++;
        }
        if(a>=2)
        cout << "Water filling time \n";
        else
        cout << "Not now\n"; 
    }

    return 0;
}