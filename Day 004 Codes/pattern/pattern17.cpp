#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number for pattern: ";
    cin>>n;

    for(int row=1; row<=n; row++) {
        char a='A';
        for(int col=1; col<=n-row; col++)
            cout<<"  ";
        for(int col=1; col<=row; col++)
            cout<<a++<<" ";
        a-=2;
        for(int col=1; col<row; col++)
            cout<<a--<<" ";
        cout<<endl;
    }

    return 0;
}

// Output-

// Enter number for pattern: 4
//       A 
//     A B A 
//   A B C B A 
// A B C D C B A 