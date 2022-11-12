#include<iostream>
using namespace std;

void printArrayElements(int arr[5]);

int main() {

    int arr[0];

    printArrayElements(arr);

}

void printArrayElements(int arr[]) {

    int i, n, temp;

    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements of array: ";

    for(i=0; i<n; i++)
        cin>>arr[i];

    cout<<"Before Swap"<<endl;

    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";

    for(i=0; i<n/2; i++) {

        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;

    }

    cout<<"\nAfter Swap"<<endl;

    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";

}

// Output-

// Enter the number of elements: 10
// Enter the elements of array: 0 1 2 3 4 5 6 7 8 9
// Before Swap
// 0 1 2 3 4 5 6 7 8 9 
// After Swap
// 9 8 7 6 5 4 3 2 1 0 