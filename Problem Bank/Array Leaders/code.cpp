#include <bits/stdc++.h>
using namespace std;

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> res;
        int n = arr.size();
        int maxRight = arr[n-1];
        res.push_back(maxRight);
        
        for (int i=n-2;i>=0;i--){
            if (arr[i] >= maxRight){
                maxRight = arr[i];
                res.push_back(maxRight);
            }
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};