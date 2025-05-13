#include <iostream>
using namespace std;

int climbStairs(int n) {
    if (n <= 1) return 1;
    
    int prev1 = 1; // ways(1)
    int prev2 = 1; // ways(0)
    
    for (int i = 2; i <= n; i++) {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    
    return prev1;
}

int main() {
    int n = 5;
    cout << "Number of ways to climb: " << climbStairs(n) << endl;
    return 0;
}
