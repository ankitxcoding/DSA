#include<iostream>
using namespace std;

void printArrayElements(int arr[5]);

int main() {

    int arr[0];

    printArrayElements(arr);

}

void printArrayElements(int arr[]) {

    int i, n;

    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements of array: ";

    for(i=0; i<n; i++) {
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }

}