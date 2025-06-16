#include <bits/stdc++.h>
using namespace std;

int largestContiguousSum(vector <int> &arr){
   int maxSubarraySum = INT_MIN;
       for(int i = 0; i < arr.size(); i++) {
           for(int j = 0; j < arr.size(); j++) {
               int subarraySum = 0;
               for(int k = i; k <= j; k++) {
                   subarraySum += arr[k];
               }
               maxSubarraySum = max(maxSubarraySum, subarraySum);
           }
   }
   return maxSubarraySum;
}