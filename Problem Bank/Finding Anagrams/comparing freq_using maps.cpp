#include <bits/stdc++.h>
using namespace std;

bool checkAnagrams(string s1, string s2){
    if (s1.size() != s2.size()){
        return false;
    }

    unordered_map <char,int> charCount;
    for (char c:s1){
        charCount[c]++;
    }

    for (char c:s2){
        if (charCount.find(c) == charCount.end() || charCount[c]==0){
            return false;
        }
        charCount[c]--;
    }

    for (auto& q:charCount){
        if (q.second != 0){
            return false;
        }
    }

    return true;
}

int main() {
    int T;cin>>T;
    for (int k=0;k<T;k++){
        string a,b; cin>>a>>b;

        if (checkAnagrams(a,b)){
            cout<<"True"<<endl;
        }
        else{
            cout<<"False"<<endl;
        }
        
    }  
    return 0;
}