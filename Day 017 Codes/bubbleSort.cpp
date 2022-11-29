#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size);

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

    bubbleSort(arr, size);

    cout<<"\nAfter Sorting : ";
    for(i=0; i<size; i++)
        cout<<arr[i]<<" ";

    return 0;

}

void bubbleSort(int arr[], int size) {

    int i, j, temp;

    bool isSwap=false;

    for(i=0; i<size-1; i++) {

        for(j=0; j<size-i-1; j++) {
            if(arr[j]>arr[j+1]) {
                
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

                isSwap=true;

            }
        }

        if(isSwap==false)
            break;
            
    }
    
}

// Output-

// Enter the lengh of array: 5
// Enter the elements of array: 5 4 3 2 1
// Before Sorting : 5 4 3 2 1 
// After Sorting : 1 2 3 4 5 