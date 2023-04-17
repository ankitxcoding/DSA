#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number for pattern: ";
    cin>>n;

    for(int row=1; row<=n; row++) {
        int pattern=row;
        for(int col=1; col<=row; col++)
            cout<<(pattern++)%2<<" ";
        cout<<endl;
    }

    return 0;
}

// Output-

// Enter number for pattern: 5
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 