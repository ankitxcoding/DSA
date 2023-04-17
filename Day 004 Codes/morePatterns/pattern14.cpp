#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number for pattern: ";
    cin>>n;

    for(int row=1; row<=n; row++) {
        char a='A';
        for(int col=1; col<=row; col++)
            cout<<a++<<" ";
        cout<<endl;
    }

    return 0;
}

// Output-

// Enter number for pattern: 5
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 