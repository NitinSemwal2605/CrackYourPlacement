#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int n = cardPoints.size();
        int sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += cardPoints[i];
        }
        int maxi = sum;
        int j = n - 1;
        for (int i = k - 1; i >= 0; i--)
        {
            sum = sum - cardPoints[i] + cardPoints[j];
            maxi = max(maxi, sum);
            j--;
        }
        return maxi;
    }
};

int main()
{
    Solution s;
    vector<int> cardPoints = {1, 2, 3, 4, 5, 6, 1};
    int k = 3;
    cout << s.maxScore(cardPoints, k);
    return 0;
}
