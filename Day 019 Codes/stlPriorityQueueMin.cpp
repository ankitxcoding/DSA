#include<iostream>
#include<queue>
using namespace std;

int main() {

    priority_queue<int, vector<int>, greater<int>> priorityQueueMin;

    int size, element;

    cout<<"Enter the size of priorityQueueMin: ";
    cin>>size;

    cout<<"Enter the elements of priorityQueueMin: ";

    for(int i=0; i<size; i++) {
        cin>>element;
        priorityQueueMin.push(element);
    }

    cout<<"The size of priorityQueueMin: "<<priorityQueueMin.size()<<endl;

    cout<<"priorityQueueMin is empty or not: "<<priorityQueueMin.empty()<<endl;

    cout<<"priorityQueueMin: ";
    while(!priorityQueueMin.empty()) {
        cout<<"\n"<<priorityQueueMin.top();
        priorityQueueMin.pop();
    }

    cout<<"\npriorityQueueMin is empty or not: "<<priorityQueueMin.empty();
    
    return 0;

}

// Output-

// Enter the size of priorityQueueMin: 5
// Enter the elements of priorityQueueMin: 5 1 4 3 2
// The size of priorityQueueMin: 5
// priorityQueueMin is empty or not: 0
// priorityQueueMin: 
// 1
// 2
// 3
// 4
// 5
// priorityQueueMin is empty or not: 1