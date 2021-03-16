#include<iostream>
#include<climits>

using namespace std;

int main() {
    int i, n, key;
    int a[1000];
    cin>>n;
    for( i= 0; i< n; i++) {
        cin>>a[i];
    }    
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for(i=0; i<n; i++) {
        largest = max(largest, a[i]);
        smallest = min(smallest, a[i]);
    }
    cout<<"Largest: " << largest<<endl;
    cout<<"Smallest : " << smallest <<endl;
    return 0;
}
