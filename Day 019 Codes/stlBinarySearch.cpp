#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main () {

    vector<int> vArr;

    int size, element, x;

    cout<<"Enter the length of array: ";
    cin>>size;

    cout<<"Enter the elements in ascending order: ";

    for(int i=0; i<size; i++) {
        cin>>element;
        vArr.push_back(element);
    }

    cout<<"Enter an element for search: ";
    cin>>x;

    cout<<"Array: ";

    for(auto &k : vArr)
        cout<<k<<" ";

    cout<<"\nIs element "<<x<<" present: "<<binary_search(vArr.begin(), vArr.end(), x)<<endl;

    return 0;

}

// Output-

// Enter the length of array: 5
// Enter the elements in ascending order: 1 2 3 4 5
// Enter an element for search: 3
// Array: 1 2 3 4 5 
// Is element 3 present: 1