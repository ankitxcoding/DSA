#include<iostream>
#include<stack>
using namespace std;

int main() {

    stack<int> stack;

    int size, element;

    cout<<"Enter the length of stack: ";
    cin>>size;

    cout<<"Enter the elements of stack: ";

    for(int i=0; i<size; i++) {
        cin>>element;
        stack.push(element);
    }

    cout<<"The size of stack: "<<stack.size()<<endl;

    cout<<"Stack is empty or not: "<<stack.empty()<<endl;

    cout<<"Stack: ";
    while(!stack.empty()) {
        cout<<"\n"<<stack.top();
        stack.pop();
    }

    cout<<"\nStack is empty or not: "<<stack.empty();
    
    return 0;

}

// Output-

// Enter the length of stack: 5
// Enter the elements of stack: 5 4 3 2 1
// The size of stack: 5
// Stack is empty or not: 0
// Stack: 
// 1
// 2
// 3
// 4
// 5
// Stack is empty or not: 1