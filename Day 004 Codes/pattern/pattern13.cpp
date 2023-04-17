#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number for pattern: ";
    cin>>n;

    int pattern=1;

    for(int row=1; row<=n; row++) {
        for(int col=1; col<=row; col++) {
            cout<<pattern++<<" ";
        }
        cout<<endl;
    }

    return 0;
}

// Output-

// Enter number for pattern: 4
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 