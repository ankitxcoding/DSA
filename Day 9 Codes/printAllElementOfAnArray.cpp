#include<iostream>
using namespace std;

void printArrayElements(int arr[5]);

int main() {

    int arr[0];

    printArrayElements(arr);

}

void printArrayElements(int arr[]) {

    int i,n;

    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements of array: ";

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

}

// Output-

// Enter the number of elements: 7
// Enter the elements of array: 11 13 21 27 7 47 22
// 11 13 21 27 7 47 22 