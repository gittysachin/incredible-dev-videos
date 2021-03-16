void bubble_sort(int a[], int n) {
    // N-1 large elements to the end 
    for(int itr=1; itr<=n-1; itr++) {
        // Pairwise swapping in the unsorted part of the array 
        for(int j=0; j<(n-itr-1); j++) {
            if(a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
            }
        }
    }
}
