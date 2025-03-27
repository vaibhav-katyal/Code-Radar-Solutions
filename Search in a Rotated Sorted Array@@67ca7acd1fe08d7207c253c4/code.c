int searchInRotatedArray(int *arr, int n, int target){
    int low = 0;
    int high = n-1;
    int ind = 0;
    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid] == target){
            ind = mid;
            break;
        }
        else if(arr[low] < arr[mid]){
            ind = low;
            low = mid+1;
        }else{
            ind = mid;
            high = mid-1;
        }   
    }
    return ind;
}