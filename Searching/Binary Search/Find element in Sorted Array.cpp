// Given a sorted array and target value. Find if target is present or not in the array.

bool binary_search(int arr[], int n, int target){
    int l=0, h=n-1, mid;
    while (l <= h){
        mid = l + (h-l)/2;
        if (arr[mid] == target){
            return true;
        }
        else if (arr[mid]<target){
            l = mid+1; 
        }
        else{
            h = mid-1;
        } 
    }
    return false;
}