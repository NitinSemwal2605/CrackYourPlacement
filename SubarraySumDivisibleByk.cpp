#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int PrefixSum = 0;
        int total = 0;

        m[0] = 1;

        for (int i = 0; i < nums.size(); i++) {
            PrefixSum += nums[i];
            int rem = PrefixSum % k;

            // Adjust negative 
            if (rem < 0) {
                rem += k;
            }

            if (m.count(rem)) {
                total += m[rem];  
                m[rem]++;
            } else {
                m[rem] = 1;  
            }
        }

        return total;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 5, 0, -2, -3, 1};
    int k = 5;
    cout << "Number of subarrays divisible by " << k << ": " << sol.subarraysDivByK(nums, k) << endl;
    return 0;
}



