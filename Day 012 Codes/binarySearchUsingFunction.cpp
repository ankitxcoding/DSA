#include<iostream>
using namespace std;

int binarySearch(int arr[]);

int main() {

    int arr[0], index;

    index=binarySearch(arr);

    if(index == -1)
        cout<<"\nNot Found!";
    else
        cout<<"\nElement found at index possition "<<index;

    return 0;
}

int binarySearch(int arr[]) {

    int size, i, x, low, high, mid;

    cout<<"Enter the lengh of array: ";
    cin>>size;

    arr[size];

    cout<<"Enter elements in ascending order: ";
    for(i=0; i<size; i++)
        cin>>arr[i];

    cout<<"Enter the element for search: ";
    cin>>x;

    cout<<"Array: ";
    for(i=0; i<size; i++)
        cout<<arr[i]<<" ";

    low=0;
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