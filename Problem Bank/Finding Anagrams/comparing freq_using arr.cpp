#include <bits/stdc++.h>
using namespace std;

bool checkAnagrams(string s1, string s2){
    if (s1.size() != s2.size()){
        return false;
    }

    vector<int> charCount(26,0);

    for (char c:s1){
        charCount[c-'a']++;
    }

    for (char c:s2){
        charCount[c-'a']--;
    }

    for (int i: charCount){
        if (i != 0){
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