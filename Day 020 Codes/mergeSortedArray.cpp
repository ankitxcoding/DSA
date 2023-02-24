#include<iostream>
using namespace std;

int main() {

    int n, m, size;

    cout<<"Enter the size of first array: ";
    cin>>n;

    int arr1[n];

    cout<<"Enter the elements of first array: ";
    for(int i=0; i<n; i++)
        cin>>arr1[i];

    cout<<"Enter the size of second array: ";
    cin>>m;

    int arr2[m];

    cout<<"Enter the elements of first array: ";
    for(int i=0; i<m; i++)
        cin>>arr2[i];

    n=sizeof(arr1)/sizeof(arr1[0]);
    m=sizeof(arr2)/sizeof(arr2[0]);

    size=n+m;

    int arr3[size];

    cout<<"First Array: "<<endl;
    for(int i=0; i<n; i++)
        cout<<arr1[i]<<" ";

    cout<<endl;

    cout<<"Second Array: "<<endl;
    for(int i=0; i<m; i++)
        cout<<arr2[i]<<" ";

    int i=0, j=0, k=0;

    while(i<n && j<m) {

        if(arr1[i]<arr2[j])
            arr3[k++]=arr1[i++];

        else
            arr3[k++]=arr2[j++];

    }

    while(i<n)
        arr3[k++]=arr1[i++];

    while(j<m)
        arr3[k++]=arr2[j++];

    cout<<"\nSorted Array: ";
    for(int i=0; i<size; i++)
        cout<<arr3[i]<<" ";

    // This piece of code not working with vectors
}

// Output-

// Enter the size of first array: 5
// Enter the elements of first array: 1 3 5 7 9
// Enter the size of second array: 4
// Enter the elements of first array: 2 4 6 8
// First Array: 
// 1 3 5 7 9 
// Second Array: 
// 2 4 6 8 
// Sorted Array: 1 2 3 4 5 6 7 8 9 