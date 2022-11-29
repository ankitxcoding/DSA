#include<iostream>
using namespace std;

void selectionSort(int arr[], int size);

int main() {

    int size, i;

    cout<<"Enter the lengh of array: ";
    cin>>size;

    int arr[size-1];

    cout<<"Enter the elements of array: ";
    for(i=0; i<size; i++)
        cin>>arr[i];

    cout<<"Before Sorting : ";
    for(i=0; i<size; i++)
        cout<<arr[i]<<" ";

    selectionSort(arr, size);

    cout<<"\nAfter Sorting : ";
    for(i=0; i<size; i++)
        cout<<arr[i]<<" ";

    return 0;

}

void selectionSort(int arr[], int size) {

    int minIndex, i, j, temp;

    for(i=0; i<size-1; i++) {

        minIndex=i;

        for(j=i+1; j<size; j++)
            if(arr[j]<arr[minIndex])
                minIndex=j;

        temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;

    }
    
}

// Output-

// Enter the lengh of array: 5
// Enter the elements of array: 5 4 3 2 1
// Before Sorting : 5 4 3 2 1 
// After Sorting : 1 2 3 4 5 