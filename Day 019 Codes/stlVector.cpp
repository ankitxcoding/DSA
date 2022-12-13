#include<iostream>
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

    cout<<"Array: ";

    for(auto &k : vArr)
        cout<<k<<" ";

    cout<<"\nFront: "<<vArr.front()<<endl;
    cout<<"Back: "<<vArr.back()<<endl;

    cout<<"The size of array is: "<<vArr.size()<<endl;

    cout<<"The capacity of array is: "<<vArr.capacity()<<endl; //capacity gets doubled e.g. 1, 2, 4, 8, 16, so on...

    vArr.pop_back();

    cout<<"Delete back element: "<<endl;

    for(auto &k : vArr)
        cout<<k<<" ";

    vArr.erase(vArr.begin());

    cout<<"\nDelete front element: "<<endl;

    for(auto &k : vArr)
        cout<<k<<" ";

    return 0;
    
}

// Output-

// Enter the length of array: 5
// Enter the elements of array: 1 2 3 4 5
// Array: 1 2 3 4 5 
// Front: 1
// Back: 5
// The size of array is: 5
// The capacity of array is: 8
// Delete back element: 
// 1 2 3 4 
// Delete front element: 
// 2 3 4