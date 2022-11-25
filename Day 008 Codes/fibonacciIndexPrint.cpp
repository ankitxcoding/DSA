#include<iostream>
using namespace std;

void fibonnaciPrint();
void fibonnaciIndex();

int main() {

    fibonnaciPrint();
    fibonnaciIndex();

}

void fibonnaciPrint() {

    int n, temp, x=0, y=1;

    cout<<"Enter the length of fibonacci series: ";
    cin>>n;

    cout<<x<<" "<<y<<" ";

    for(int i=0; i<n-2; i++) {
        temp=x+y;
        x=y;
        y=temp;
        cout<<y<<" ";
    }

}

void fibonnaciIndex() {

    int temp, x=0, y=1, index;

    cout<<"\nEnter the index: ";
    cin>>index;

    for(int i=0; i<index-2; i++) {
        temp=x+y;
        x=y;
        y=temp;
    }

    if(y==1)
        cout<<"The element at index "<<index<<" is "<<x;
    else
        cout<<"The element at index "<<index<<" is "<<y;

}

// Output-

// Enter the length of fibonacci series: 10
// 0 1 1 2 3 5 8 13 21 34 
// Enter the index: 5
// The element at index 5 is 3

// Enter the length of fibonacci series: 12
// 0 1 1 2 3 5 8 13 21 34 55 89 
// Enter the index: 10
// The element at index 10 is 34