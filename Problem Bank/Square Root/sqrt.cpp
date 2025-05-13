#include <bits/stdc++.h>
using namespace std;

int using_loop(int n){
    int i=1;
    while(i*i<=n){
        i++;
    }
    return i-1;
}

int using_binary_search(int n){
    int l=0, h=n, ans=1, mid;
    while (l<=h){
        mid = l + (h-l)/2;
        if (mid*mid <= n){
            l = mid+1;
            ans = mid;
        }
        else{
            h = mid-1;
        }
    }
    return ans;
}

int direct_formula(int n){
    return sqrt(n);
}

int pocket_cal(int n){
    int res = exp(0.5 * log(n));  // Calculate square root using the formula
    if ((res + 1) * (res + 1) <= n) {
        res++;
    }
    return res;
}

int main() {
    int n; cin>>n;
    cout<<using_loop(n);
    cout<<using_binary_search(n);
    cout<<direct_formula(n);
    cout<<pocket_cal(n);
}