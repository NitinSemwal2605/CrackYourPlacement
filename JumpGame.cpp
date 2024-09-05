#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int maxi = 0;
        int n = nums.size();
        cout << n;

        for (int i = 0; i < n; ++i)
        {
            if (i > maxi)
            {
                return false;
            }
            maxi = max(maxi, i + nums[i]);

            if (maxi >= n - 1)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 3, 1, 1, 4};
    cout << s.canJump(nums);
    return 0;
}