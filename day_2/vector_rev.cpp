#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1 = {1,3,5};
    for(int x : v1)
    {
        cout << x << " ";
    }
    cout << endl;

    v1.push_back(6);
    v1.insert(v1.begin()+1 , 2);
    v1.insert(v1.begin()+3 , 4);

    for(int x : v1)
    {
        cout << x << " ";
    }

    return 0;
}