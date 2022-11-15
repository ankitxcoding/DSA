#include<iostream>
using namespace std;

int main() {

    int size, i, x, low, high, mid;

    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];

    cout<<"Enter the elements of array in ascending order: ";
    for(i=0; i<size; i++)
        cin>>arr[i];

    cout<<"Enter the element for search: ";
    cin>>x;

    cout<<"Array : ";
    for(i=0; i<size; i++)
        cout<<arr[i]<<" ";

    low=0;
    high=size;
    mid=low+(high-low)/2;

    while(low<=high) {

        if(x==arr[mid]) {
            cout<<"\nThe element "<<x<<" found at index position "<<mid;
            break;
        }
        else if(x<arr[mid])
            high=mid-1;
        else
            low=mid+1;

        mid=low+(high-low)/2;
    }

    if(low>high)
        cout<<"\nElement "<<x<<" is not found!";

    return 0;

}

// Output-

// Enter the size of array: 10
// Enter the elements of array in accending order: 10 11 12 13 14 15 16 17 18 19
// Enter the element for search: 10
// Array : 10 11 12 13 14 15 16 17 18 19 
// The element 10 found at index position 0

// Enter the size of array: 10
// Enter the elements of array in accending order: 10 11 12 13 14 15 16 17 18 19
// Enter the element for search: 19
// Array : 10 11 12 13 14 15 16 17 18 19 
// The element 19 found at index position 9

// Enter the size of array: 10
// Enter the elements of array in accending order: 10 11 12 13 14 15 16 17 18 19
// Enter the element for search: 15
// Array : 10 11 12 13 14 15 16 17 18 19 
// The element 15 found at index position 5

// Enter the size of array: 10
// Enter the elements of array in accending order: 10 11 12 13 14 15 16 17 18 19
// Enter the element for search: 20
// Array : 10 11 12 13 14 15 16 17 18 19 
// Element 20 is not found!