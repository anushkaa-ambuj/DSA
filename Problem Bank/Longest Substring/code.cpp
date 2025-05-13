#include <bits/stdc++.h>
using namespace std;

int lengthofLongestSubstring(string s){
    unordered_set<char> check;  //To check the duplicates in the selcted window
    int left=0, right=0;
    int maxLength = 0;

    while(right < s.length()){
        // Check if right pointed element is not duplicate if so then add it in the window
        if (check.find(s[right]) == check.end()){
            check.insert(s[right]);
            maxLength = max(maxLength, right-left+1);
            right++;
        }
        else{
            check.erase(s[left]);
            left++;
        }
    }
    return maxLength;
}

int main(){
    string s = "abcdaabc";
    cout<<lengthofLongestSubstring(s)<<endl;
}