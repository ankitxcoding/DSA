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

    cout<<"Array before reverse: ";

    for(auto &k : vArr)
        cout<<k<<" ";

    reverse(vArr.begin(), vArr.end());

    cout<<"\nArray after reverse: ";

    for(auto &k : vArr)
        cout<<k<<" ";

    return 0;

}

// Output-

// Enter the length of array: 5
// Enter the elements of array: 1 2 3 4 5
// Array before reverse: 1 2 3 4 5 
// Array after reverse: 5 4 3 2 1