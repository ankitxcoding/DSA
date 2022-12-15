#include<iostream>
#include<deque>
using namespace std;

int main() {

    deque<int> doubleEndedQueue;

    int size, element;

    cout<<"Enter the length of deque: ";
    cin>>size;

    cout<<"Enter the elements of deque: ";

    for(int i=0; i<size; i++) {
        cin>>element;
        doubleEndedQueue.push_back(element);
    }

    cout<<"Deque: ";

    for(auto &k : doubleEndedQueue)
        cout<<k<<" ";

    cout<<"\nFront: "<<doubleEndedQueue.front()<<endl;
    cout<<"Back: "<<doubleEndedQueue.back()<<endl;

    cout<<"The size of deque is: "<<doubleEndedQueue.size()<<endl;

    // cout<<"The capacity of deque is: "<<doubleEndedQueue.capacity()<<endl; capacity is not applicable in deque

    doubleEndedQueue.push_front(1);

    cout<<"Deque after front push: ";

    for(auto &k : doubleEndedQueue)
        cout<<k<<" ";

    doubleEndedQueue.pop_back();

    cout<<"\nDeque after pop back: ";

    for(auto &k : doubleEndedQueue)
        cout<<k<<" ";

    doubleEndedQueue.pop_front();

    cout<<"\nDeque after pop front: ";

    for(auto &k : doubleEndedQueue)
        cout<<k<<" ";

    doubleEndedQueue.erase(doubleEndedQueue.begin()+1, doubleEndedQueue.begin()+3); //it is the range for erase, element at index 1 & 2 gets deleted
    cout<<"\nDeque after erase random element: ";

    for(auto &k : doubleEndedQueue)
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