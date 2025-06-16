#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        unordered_set<int> s;
        int n = arr.size();
    
        for (int i: arr){
            s.insert(i);
        }
        
        for (int i=1; i<=n+1; i++){
            if (s.find(i) == s.end()){
                return i;
            }
        }
    }
};
