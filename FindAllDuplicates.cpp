#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set<int> st;       
        vector<int> duplicate;
        for(int i=0; i < nums.size(); i++)
        {
            if(st.count(nums[i]))
            {
                duplicate.push_back(nums[i]);
            }
            else
            {
                st.insert(nums[i]);
            }
        }

        return duplicate;  
    }
};
int main() {
    vector<int> nums = {1, 2, 3, 4, 4, 5, 6, 6, 7};
    Solution obj;
    vector<int> duplicates = obj.findDuplicates(nums);
    
    cout << "Duplicate elements: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    
    return 0;
}