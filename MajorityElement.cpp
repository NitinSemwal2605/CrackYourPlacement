#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();

        //declaring a map:
        map<int, int> mpp;

        //storing elements with  occurnce:
        for (int i = 0; i < n; i++)
        {
            mpp[nums[i]]++;
        }

        //searching majority element:
        for (auto it : mpp)
        {
            if (it.second > (n / 2))
            {
                return it.first;
            }
        }

        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << s.majorityElement(nums);
    return 0;
}
