#include<iostream>
using namespace std;

int main() {

    int i;
    
    cout<<"Enter an integer: ";
    cin>>i;

    if(i%2==0)
        cout<<i<<" is even number"<<endl;
    else
        cout<<i<<" is odd number"<<endl;
    
    return 0;
    
}

// Output-

// Enter an integer: 10
// 10 is even number

// Enter an integer: 7
// 7 is odd number