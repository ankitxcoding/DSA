#include<iostream>
using namespace std;

int main() {

    int size, i, j, temp;

    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];

    cout<<"Enter the elements of array: ";
        for(i=0; i<size; i++)
            cin>>arr[i];

    cout<<"Array before sort: ";
        for(i=0; i<size; i++)
            cout<<arr[i]<<" ";

        for(i=0; i<size; i++) {
            for(j=i+1; j<size; j++) {
                if(arr[j]<arr[i]) {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }

    cout<<"\nArray after sort: ";
        for(i=0; i<size; i++)
            cout<<arr[i]<<" ";

    return 0;

}

// Output-

// Enter the size of array: 9
// Enter the elements of array: 0 2 2 1 0 1 1 2 0
// Array before sort: 0 2 2 1 0 1 1 2 0 
// Array after sort: 0 0 0 1 1 1 2 2 2

// Enter the size of array: 10
// Enter the elements of array: 9 0 5 4 6 2 1 3 8 7
// Array before sort: 9 0 5 4 6 2 1 3 8 7 
// Array after sort: 0 1 2 3 4 5 6 7 8 9