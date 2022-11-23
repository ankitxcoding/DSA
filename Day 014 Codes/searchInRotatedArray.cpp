#include<iostream>
using namespace std;

int pivotInRotatedArray(int arr[], int size, int x);
int binarySearchInFirst(int arr[], int x, int size, int pivot);
int binarySearchInSecond(int arr[], int x, int size, int pivot);

int main() {

    int pivot, index, size, x, i;

    cout<<"Enter the lengh of array: ";
    cin>>size;

    int arr[size-1];

    cout<<"Enter the elements of rotated array: ";
    for(i=0; i<size; i++)
        cin>>arr[i];

    cout<<"Enter the element for search: ";
    cin>>x;

    cout<<"Array: ";
    for(i=0; i<size; i++)
        cout<<arr[i]<<" ";

    pivot=pivotInRotatedArray(arr, size, x);

    if(x>=arr[pivot] && x<=arr[size-1]) {

        index=binarySearchInSecond(arr, x, size, pivot);
        cout<<"\nElement is at index: "<<index<<endl;

    }
    else if(x>=arr[pivot] && x>=arr[0]) {

        index=binarySearchInFirst(arr, x, size, pivot);
        cout<<"\nElement is at index: "<<index<<endl;
        
    }

    else
        cout<<"\nNot Found!";

    return 0;

}

int pivotInRotatedArray(int arr[], int size, int x) {

    int low, mid, high;

    low=0;
    high=size;
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

int binarySearchInFirst(int arr[], int x, int size, int pivot) {

    int i, low, high, mid;

    low=0;
    high=pivot-1;
    mid=low+(high-low)/2;

    while(low<=high) {

        if(x==arr[mid])
            return mid;

        else if(x<arr[mid])
            high=mid-1;

        else
            low=mid+1;

        mid=low+(high-low)/2;
    }

    return -1;
}

int binarySearchInSecond(int arr[], int x, int size, int pivot) {

    int i, low, high, mid;

    low=pivot;
    high=size;
    mid=low+(high-low)/2;

    while(low<=high) {

        if(x==arr[mid])
            return mid;

        else if(x<arr[mid])
            high=mid-1;

        else
            low=mid+1;

        mid=low+(high-low)/2;
    }

    return -1;
}

// Output-

// Enter the lengh of array: 7
// Enter the elements of rotated array: 7 8 9 1 2 3 4
// Enter the element for search: 2
// Array: 7 8 9 1 2 3 4 
// Element is at index: 4

// Enter the lengh of array: 7
// Enter the elements of rotated array: 7 8 9 1 2 3 4
// Enter the element for search: 8
// Array: 7 8 9 1 2 3 4 
// Element is at index: 1

// Enter the lengh of array: 7
// Enter the elements of rotated array: 7 8 9 1 2 3 4
// Enter the element for search: 5
// Array: 7 8 9 1 2 3 4 
// Not Found!