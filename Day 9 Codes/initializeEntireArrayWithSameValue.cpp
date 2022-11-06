#include<iostream>
using namespace std;


int main() {

    int arrayLength, initializeValue;

    cout<<"Enter the array length: ";
    cin>>arrayLength;

    cout<<"Enter the intialization value: ";
    cin>>initializeValue;

    int arr[]={initializeValue};

    for(int i=0; i<arrayLength; i++) {
        cout<<arr[0]<<" ";
    }

    return 0;

}