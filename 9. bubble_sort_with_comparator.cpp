bool compare(int a, int b) {
    cout<< "Comparing" << a << " and " << b << endl;
    return a > b; // increasing order
}

void bubble_sort(int a[], int n, bool (&cmp)(int a, int b)) {
    // N-1 large elements to the end 
    for(int itr=1; itr<=n-1; itr++) {
        // Pairwise swapping in the unsorted part of the array 
        for(int j=0; j<(n-itr-1); j++) {
            if(cmp(a[j] , a[j+1])) {
                swap(a[j], a[j+1]);
            }
        }
    }
}
