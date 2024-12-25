#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin>>T;
    for (int k;k<T;k++){
        long int N; cin>>N;
        if ((N&(N-1)) == 0){
            cout<<"True \n";
        }
        else{
            cout<<"False \n";
        }
    } 
    return 0;
}