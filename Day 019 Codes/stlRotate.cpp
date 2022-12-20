#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

    vector<int> vArr;

    int size, element;

    cout<<"Enter the length of array: ";
    cin>>size;

    cout<<"Enter the elements of array: ";

    for(int i=0; i<size; i++) {
        cin>>element;
        vArr.push_back(element);
    }

    cout<<"Array before rotate: ";

    for(auto &k : vArr)
        cout<<k<<" ";

    rotate(vArr.begin(), vArr.begin()+1, vArr.end());

    cout<<"\nArray after rotate: ";

    for(auto &k : vArr)
        cout<<k<<" ";

    return 0;

}

// Output-

// Enter the length of array: 5
// Enter the elements of array: 1 2 3 4 5
// Array before rotate: 1 2 3 4 5 
// Array after rotate: 2 3 4 5 1