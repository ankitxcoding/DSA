#include<iostream>
#include<queue>
using namespace std;

int main() {

    priority_queue<int> priorityQueueMax;

    int size, element;

    cout<<"Enter the size of priorityQueueMax: ";
    cin>>size;

    cout<<"Enter the elements of priorityQueueMax: ";

    for(int i=0; i<size; i++) {
        cin>>element;
        priorityQueueMax.push(element);
    }

    cout<<"The size of priorityQueueMax: "<<priorityQueueMax.size()<<endl;

    cout<<"priorityQueueMax is empty or not: "<<priorityQueueMax.empty()<<endl;

    cout<<"priorityQueueMax: ";
    while(!priorityQueueMax.empty()) {
        cout<<"\n"<<priorityQueueMax.top();
        priorityQueueMax.pop();
    }

    cout<<"\npriorityQueueMax is empty or not: "<<priorityQueueMax.empty();
    
    return 0;

}

// Output-

// Enter the size of priorityQueueMax: 5
// Enter the elements of priorityQueueMax: 1 3 5 4 2
// The size of priorityQueueMax: 5
// priorityQueueMax is empty or not: 0
// priorityQueueMax: 
// 5
// 4
// 3
// 2
// 1
// priorityQueueMax is empty or not: 1