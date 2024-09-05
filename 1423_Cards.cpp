#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int total = 0;
        // Total Sum
        for (int i = 0; i < n; i++) {
            total += cardPoints[i];
        }
        // Sliding Window
        int windowSize = n - k;
        int windowSum = 0;
        // Initial Window Sum
        for (int i = 0; i < windowSize; i++) {
            windowSum += cardPoints[i];
        }
        // Initial Min Window Sum
        int minWindowSum = windowSum;
        // Sliding Window
        for (int i = windowSize; i < n; i++) {
            windowSum += cardPoints[i] - cardPoints[i - windowSize];
            minWindowSum = min(minWindowSum, windowSum);
        }
        return total - minWindowSum;
    }
};


int main() {
    vector<int> cardPoints = {1,2,3,4,5,6,1};
    int k = 3;
    cout << Solution().maxScore(cardPoints, k) << endl;
    return 0;
}