#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // Kadanes Algorithm Solution
        unordered_map<int,int> mp;
        mp[0] = 1;
        int preSum = 0,cnt = 0;

        for(int i=0;i<nums.size();i++){
            preSum += nums[i];  // Add to PreSum 
            cnt += mp[preSum - k]; // check existance 
            mp[preSum] += 1;
        }
        return cnt;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 5, 0, -2, -3, 1};
    int k = 5;
    cout << "Number of subarrays divisible by " << k << ": " << sol.subarraySum(nums, k) << endl;
    return 0;
}
