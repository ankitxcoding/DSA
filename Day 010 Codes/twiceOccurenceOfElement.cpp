#include<iostream>
using namespace std;

int main() {

    int size, i, j;

    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];

    cout<<"Enter the elements of array: ";
        for(i=0; i<size; i++)
            cin>>arr[i];

    cout<<"Array is: ";
        for(i=0; i<size; i++)
            cout<<arr[i]<<" ";

    cout<<"\nRepeated element is: ";
        for(i=0; i<size; i++)
            for(j=i+1; j<size; j++)
                if(arr[i]==arr[j])
                    cout<<arr[i]<<" ";

    return 0;

}

// Output-

// Enter the size of array: 8
// Enter the elements of array: 4 3 2 7 8 2 3 1
// Array is: 4 3 2 7 8 2 3 1 
// Repeated element is: 3 2 