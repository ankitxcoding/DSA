#include<iostream>
#include<array>
using namespace std;

int main() {

    array<int,5> arr={1, 2, 3, 4, 5};

    cout<<"Array: ";

    for(auto &k : arr)
        cout<<k<<" ";

    cout<<"\nThe size of array is: "<<arr.size();

    cout<<"Is array empty: "<<arr.empty()<<endl;

    cout<<"Element at index position 3 is: "<<arr.at(3)<<endl;

    cout<<"Array at front position is: "<<arr.front()<<"\nArray at last position is: "<<arr.back()<<endl;

    arr.fill(5);

    cout<<"Array after initializing by same value is: ";

    for(auto &k : arr)
        cout<<k<<" ";

    return 0;

}

// Output-

// Array: 1 2 3 4 5 
// The size of array is: 5Is array empty: 0
// Element at index position 3 is: 4
// Array at front position is: 1
// Array at last position is: 5
// Array after initializing by same value is: 5 5 5 5 5