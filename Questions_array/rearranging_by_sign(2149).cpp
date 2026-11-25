// BRUTE FORCE APPROACH

#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();

    vector<int> pos;
    vector<int> neg;
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {
            pos.push_back(nums[i]);
        }
        else {
            neg.push_back(nums[i]);
        }
    }

    for (int i = 0; i < n / 2; i++) {
        ans[2 * i] = pos[i];
        ans[2 * i + 1] = neg[i];
    }

    return ans;
}

int main() {
    vector<int> nums = {3, 1, -2, -5, 2, -4};

    vector<int> ans = rearrangeArray(nums);

    cout << "Rearranged Array: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
// tc O(n + n) sc = O(n)-for ans

// optimal
// int n = nums.size();
        
//         vector<int> ans(n,0);
//         int posIndex = 0 , negIndex = 1;
        
//         for (int i = 0; i < n; ++i) {
//             if (nums[i] > 0) {
//                 ans[posIndex] = nums[i];
//                 posIndex+=2;
//             }
//             else {
//                 ans[negIndex] = nums[i];
//                 negIndex+=2;
//             }
//         }
            
//         return ans;


// tc = O(n) sc = O(n)-for ans
        