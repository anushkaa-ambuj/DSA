bool linear_search(int arr[], int n, int target){
    for (int i=0;i<n;i++){
        if (arr[i]==target){
            return true;
        }
    }
    return false;
}