// Given a sorted array and target value. Find the index of the first number that is greater than or equal to (ceil) the target in the array.

int binary_search(int arr[], int n, int target){
    int l=0, h=n-1, ans=-1, mid;
    while (l < h){
        mid = l + (h-l)/2;
        if (arr[mid] >= target){
            ans = mid;
            h = mid-1;
        }
        else{
            l = mid + 1;
        } 
    }
    return ans;
}