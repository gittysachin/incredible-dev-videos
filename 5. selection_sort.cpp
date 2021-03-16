void selection_sort(int a[], int n) {
    for(int i=0; i<n-1; i++) {    // when you have one element left, it's already sorted
        // find out the smallest element idx in the unsorted part
        int min_index = i;
        for(int j=i; j<=i-1; j++) {
            if(a[j] < a[min_index]) {
                min_index = j;
            }
        }
        swap(a[i], a[min_index]);
    }
}
