#include<iostream>
#include<list>
using namespace std;

int main() {

    list<int> list;

    int size, element;

    cout<<"Enter the length of array: ";
    cin>>size;

    cout<<"Enter the elements of array: ";

    for(int i=0; i<size; i++) {
        cin>>element;
        list.push_back(element);
    }

    cout<<"Deque: ";

    for(auto &k : list)
        cout<<k<<" ";

    cout<<"\nFront: "<<list.front()<<endl;
    cout<<"Back: "<<list.back()<<endl;

    cout<<"The size of deque is: "<<list.size()<<endl;

    // cout<<"The capacity of deque is: "<<list.capacity()<<endl; capacity is not applicable in deque

    list.push_front(1);

    cout<<"Deque after front push: ";

    for(auto &k : list)
        cout<<k<<" ";

    list.pop_back();

    cout<<"\nDeque after pop back: ";

    for(auto &k : list)
        cout<<k<<" ";

    list.pop_front();

    cout<<"\nDeque after pop front: ";

    for(auto &k : list)
        cout<<k<<" ";

    list.erase(list.begin()+1, list.begin()+3); //it is the range for erase, element at index 1 & 2 gets deleted
    cout<<"\nDeque after erase random element: ";

    for(auto &k : list)
        cout<<k<<" ";

    return 0;

}

// Output-

// Enter the length of array: 5
// Enter the elements of array: 2 3 4 5 6
// Deque: 2 3 4 5 6 
// Front: 2
// Back: 6
// The size of deque is: 5
// Deque after front push: 1 2 3 4 5 6 
// Deque after pop back: 1 2 3 4 5 
// Deque after pop front: 2 3 4 5 
// Deque after erase random element: 2 5