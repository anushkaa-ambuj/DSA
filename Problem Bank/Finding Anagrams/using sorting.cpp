#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;cin>>T;
    for (int k=0;k<T;k++){
        string a,b; cin>>a>>b;

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        if (a==b){
            cout<<"True"<<endl;
        }
        else{
            cout<<"False"<<endl;
        }
    }  
    return 0;
}