#include <iostream>
#include <vector>

using namespace std;

int maxSum(vector<int>& nums) {
    int out=nums[0], curr=nums[0];

    for(int i=0; i<nums.size(); i++) {
        curr = max(curr+nums[i] , nums[i]);

        out = max(out , curr);
    }
    return out;
}

int main() {
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSum(arr);
}