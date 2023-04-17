#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number for pattern: ";
    cin>>n;

    char a='A';

    for(int row=1; row<=n; row++) {
        for(int col=1; col<=row; col++)
            cout<<a<<" ";
        cout<<endl;
        a++;
    }

    return 0;
}

// Output-

// Enter number for pattern: 5
// A 
// B B 
// C C C 
// D D D D 
// E E E E E 