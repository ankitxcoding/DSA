#include<iostream>
#include<set>
using namespace std;

int main() {

    set<int> set;

    int size, element;

    cout<<"Enter the size of set: ";
    cin>>size;

    cout<<"Enter the elements of set: ";

    for(int i=0; i<size; i++) {
        cin>>element;
        set.insert(element);
    }

    cout<<"The size of set: "<<set.size()<<endl;

    cout<<"Set is empty or not: "<<set.empty()<<endl;

    cout<<"Set: ";
    for(auto &k : set)
        cout<<k<<" ";

    cout<<"\nElement 5 is present or not: "<<set.count(5);

    // auto it=set.find(3);

    // cout<<"\nIterator is: "<<*it;

    return 0;

}

// Output-

// Enter the size of set: 5
// Enter the elements of set: 5 2 4 1 3
// The size of set: 5
// Set is empty or not: 0
// Set: 1 2 3 4 5 
// Element 5 is present or not: 1