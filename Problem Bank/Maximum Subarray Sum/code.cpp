#include <bits/stdc++.h>
using namespace std;

int largestContiguousSum(vector <int> &arr){
    int currSum = 0;
	int maxSub = arr[0];
	
	for (int n: arr){
		if (currSum < 0)
			currSum = 0;
		currSum += n;
		maxSub = max(maxSub, currSum);
	}
	
	return maxSub;
}