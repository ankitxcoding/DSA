#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number for pattern: ";
    cin>>n;
    
    char a='A';
    a+=n-1;

    for(int row=1; row<=n; row++) {
        for(int col=1; col<=row; col++)
            cout<<a++<<" ";
        cout<<endl;
        a=a-row-1;
    }

    return 0;
}

// Output-

// Enter number for pattern: 5
// E 
// D E 
// C D E 
// B C D E 
// A B C D E 