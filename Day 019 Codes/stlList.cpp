#include<iostream>
#include<list>
using namespace std;

int main() {

    list<int> list;

    int size, element;

    cout<<"Enter the length of list: ";
    cin>>size;

    cout<<"Enter the elements of list: ";

    for(int i=0; i<size; i++) {
        cin>>element;
        list.push_back(element);
    }

    cout<<"Deque: ";

    for(auto &k : list)
        cout<<k<<" ";

    cout<<"\nFront: "<<list.front()<<endl;
    cout<<"Back: "<<list.back()<<endl;

    cout<<"The size of list is: "<<list.size()<<endl;

    // cout<<"The capacity of deque is: "<<list.capacity()<<endl; capacity is not applicable in list

    list.push_front(1);

    cout<<"List after front push: ";

    for(auto &k : list)
        cout<<k<<" ";

    list.pop_back();

    cout<<"\nList after pop back: ";

    for(auto &k : list)
        cout<<k<<" ";

    list.pop_front();

    cout<<"\nList after pop front: ";

    for(auto &k : list)
        cout<<k<<" ";

    list.remove(2);
    list.remove(3);

    cout<<"\nList after erase random element: ";

    for(auto &k : list)
        cout<<k<<" ";

    return 0;

}

// Enter the length of list: 5
// Enter the elements of list: 2 3 4 5 6
// Deque: 2 3 4 5 6 
// Front: 2
// Back: 6
// The size of list is: 5
// List after front push: 1 2 3 4 5 6 
// List after pop back: 1 2 3 4 5 
// List after pop front: 2 3 4 5 
// List after erase random element: 4 5 