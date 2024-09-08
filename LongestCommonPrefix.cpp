#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans="";  // Empty String
        sort(v.begin(),v.end());  // Sorting
        int n=v.size();   // Size of Vector 
        string first=v[0],last=v[n-1];  // First and Last

        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){  // If At Any Point Both not Equal then Return.
                return ans;
            }
            ans+=first[i]; // Warna Chalo Aaage add karke .
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<string> v = {"flower", "flow", "flight"};
    cout << s.longestCommonPrefix(v) << endl;
    return 0;
}