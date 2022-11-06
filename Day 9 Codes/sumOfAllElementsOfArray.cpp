#include<iostream>
using namespace std;

void printArraySum(int arr[5]);

int main() {

    int arr[0];

    printArraySum(arr);

}

void printArraySum(int arr[]) {

    int i, n, sum=0;

    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements of array: ";

    for(i=0; i<n; i++) {
        cin>>arr[i];
        sum+=arr[i];
    }

    cout<<"Sum of all the array elements: "<<sum<<endl;

}

// Output-

// Enter the number of elements: 10                        
// Enter the elements of array: 10 20 30 40 50 60 70 80 90 100
// Sum of all the array elements: 550