#include<iostream>
using namespace std;

int main() {
    
    int i;
    
    cout<<"Enter a number: ";
    cin>>i;

    if(i>0)
        cout<<i<<" is +ve number"<<endl;
    else if(i<0)
        cout<<i<<" is negative number"<<endl;
    else
        cout<<"It is zero"<<endl;

    return 0;
    
}

// Output-

// Enter a number: 5
// 5 is +ve number

// Enter a number: -7
// -7 is negative number

// Enter a number: 0
// It is zero