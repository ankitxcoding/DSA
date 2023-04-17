#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number for pattern: ";
    cin>>n;

    for(int row=0; row<n; row++) {
        for(int col=0; col<=n-row-1; col++)
            cout<<"* ";
        cout<<endl;
    }

    return 0;
}

// Output-

// Enter the number for pattern: 5
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 