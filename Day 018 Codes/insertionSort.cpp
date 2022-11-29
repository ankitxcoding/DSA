#include<iostream>
using namespace std;

void insertionSort(int arr[], int size);

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

    insertionSort(arr, size);

    cout<<"\nAfter Sorting : ";
    for(i=0; i<size; i++)
        cout<<arr[i]<<" ";

    return 0;

}

void insertionSort(int arr[], int size) {

    int i, j, temp;

    for(i=1; i<size; i++) {

        temp=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>temp) {
            
            arr[j+1]=arr[j];
            j--;

        }

        arr[j+1]=temp;
            
    }
    
}

// Output-

// Enter the lengh of array: 5
// Enter the elements of array: 5 4 3 2 1
// Before Sorting : 5 4 3 2 1 
// After Sorting : 1 2 3 4 5 