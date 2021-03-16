void insertion_sort(int arr[], int n) {
    for(int i=1; i<=n-1; i++) {
        int e = arr[i];
        // place the current element at the 'right' position in the sorted array 
        int j = i-1;
        while(j>=0 and arr[j]>e) {
            arr[j+1] = arr[j];
            j=j-1;   
        }
        arr[j+1] = e;
    }
}
