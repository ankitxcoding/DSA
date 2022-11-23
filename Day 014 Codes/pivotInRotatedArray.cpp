#include<iostream>
using namespace std;

int pivotInRotatedArray(int arr[], int size);

int main() {

    int pivot, size, i;

    cout<<"Enter the lengh of array: ";
    cin>>size;

    int arr[size-1];

    cout<<"Enter the elements of rotated array: ";
    for(i=0; i<size; i++)
        cin>>arr[i];

    cout<<"Array: ";
    for(i=0; i<size; i++)
        cout<<arr[i]<<" ";

    pivot=pivotInRotatedArray(arr, size);
    cout<<"\nThe pivot element is at index: "<<pivot<<endl;

    return 0;

}

int pivotInRotatedArray(int arr[], int size) {

    int low, mid, high;

    low=0;
    high=size-1;
    mid=low+(high-low)/2;

    while(low<high) {

        if(arr[mid]>=arr[0])
            low=mid+1;

        else
            high=mid;

        mid=low+(high-low)/2;
    }

    return mid;

}

// Output-

// Enter the lengh of array: 5
// Enter the elements of rotated array: 7 9 1 2 3
// Array: 7 9 1 2 3 
// The pivot element is at index: 2