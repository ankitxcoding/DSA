#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int x, int size);
int lastOccurrence(int arr[], int x, int size);

int main() {

    int first, last, size, x, i;

    cout<<"Enter the lengh of array: ";
    cin>>size;

    int arr[size];

    cout<<"Enter elements in ascending order: ";
    for(i=0; i<size; i++)
        cin>>arr[i];

    cout<<"Enter the element for search: ";
    cin>>x;

    cout<<"Array: ";
    for(i=0; i<size; i++)
        cout<<arr[i]<<" ";

    first=firstOccurrence(arr, x, size);
    cout<<"\nFirst Occurrence of element at index: "<<first<<endl;

    last=lastOccurrence(arr, x, size);
    cout<<"Last Occurrence of element at index: "<<last<<endl;

    return 0;

}

int firstOccurrence(int arr[], int x, int size) {

    int low, mid, high, answer;

    low=0;
    high=size;
    mid=low+(high-low)/2;

    while(low<=high) {

        if(x==arr[mid]) {
            answer=mid;
            high=mid-1;
        }

        else if(x<arr[mid])
            high=mid-1;

        else
            low=mid+1;

        mid=low+(high-low)/2;
    }

    return answer;

}

int lastOccurrence(int arr[], int x, int size) {

    int low, mid, high, answer;

    low=0;
    high=size;
    mid=low+(high-low)/2;

    while(low<=high) {

        if(x==arr[mid]) {
            answer=mid;
            low=mid+1;
        }

        else if(x<arr[mid])
            high=mid-1;

        else
            low=mid+1;

        mid=low+(high-low)/2;
    }

    return answer;
    
}

// Output-

// Enter the lengh of array: 7
// Enter elements in ascending order: 1 2 3 3 3 3 5
// Enter the element for search: 3
// Array: 1 2 3 3 3 3 5 
// First Occurrence of element at index: 2
// Last Occurrence of element at index: 5