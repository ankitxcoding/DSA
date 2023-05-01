#include<iostream>
#include<stack>
using namespace std;

int main() {

    stack<int> stack;
    int size, element;

    cout<<"Enter the size of stack: ";
    cin>>size;

    cout<<"Enter the elements of stacks: ";
    for(int i=0; i<size; i++) {
        cin>>element;
        stack.push(element);
    }

    cout<<"Size of stack: "<<stack.size()<<endl;
    cout<<"Is stack empty or not? "<<stack.empty()<<endl;

    cout<<"Stack: ";
    while(!stack.empty()) {
        cout<<"\n"<<stack.top();
        stack.pop();
    }

    cout<<"\nSize of stack: "<<stack.size()<<endl;
    cout<<"Is stack empty or not? "<<stack.empty()<<endl;

    return 0;

}

// Output-

// Enter the size of stack: 5
// Enter the elements of stacks: 1 2 3 4 5
// Size of stack: 5
// Is stack empty or not? 0
// Stack: 
// 5
// 4
// 3
// 2
// 1
// Size of stack: 0
// Is stack empty or not? 1