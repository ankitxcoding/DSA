#include<iostream>
using namespace std;

void printArrayElements(int arr[5]);

int main() {

    int arr[0];

    printArrayElements(arr);

}

void printArrayElements(int arr[]) {

    int i, n, temp;

    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements of array: ";

    for(i=0; i<n; i++) {

        cin>>arr[i];

    }

    for(i=0; i<n/2; i++) {

        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;

    }

    for(i=0; i<n; i++){

        cout<<arr[i]<<" ";

    }

}