#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;
        long long total_sum = 1LL * n * (n + 1) / 2;
        long long sum = 0;
        
        for (int i : arr) {
            sum += i;
        }
        
        return (int)(total_sum - sum);
    }
};