#include<iostream>
#include<queue>
using namespace std;

int main() {

    queue<int> queue;

    int size, element;

    cout<<"Enter the size of queue: ";
    cin>>size;

    cout<<"Enter the elements of queue: ";

    for(int i=0; i<size; i++) {
        cin>>element;
        queue.push(element);
    }

    cout<<"The size of queue: "<<queue.size()<<endl;

    cout<<"Queue is empty or not: "<<queue.empty()<<endl;

    cout<<"Queue: ";
    while(!queue.empty()) {
        cout<<"\n"<<queue.front();
        queue.pop();
    }

    cout<<"\nQueue is empty or not: "<<queue.empty();
    
    return 0;

}

// Output-

// Enter the size of queue: 5
// Enter the elements of queue: 1 2 3 4 5
// The size of queue: 5
// Queue is empty or not: 0
// Queue: 
// 1
// 2
// 3
// 4
// 5
// Queue is empty or not: 1