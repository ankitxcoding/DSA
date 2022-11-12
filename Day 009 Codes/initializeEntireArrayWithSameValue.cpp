#include<iostream>
using namespace std;


int main() {

    int arrayLength, initializeValue;

    cout<<"Enter the array length: ";
    cin>>arrayLength;

    cout<<"Enter the intialization value: ";
    cin>>initializeValue;

    int arr[]={initializeValue};

    for(int i=0; i<arrayLength; i++)
        cout<<arr[0]<<" ";

    return 0;

}

// Output-

// Enter the array length: 10
// Enter the intialization value: 5
// 5 5 5 5 5 5 5 5 5 5