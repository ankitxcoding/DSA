#include<iostream>
#include<algorithm>
using namespace std;

int main() {

    int n;

    cout<<"Enter number for pattern: ";
    cin>>n;

    for(int row=1; row<=2*n-1; row++) {
        for(int col=1; col<=2*n-1; col++)
            cout<<(n-min(min(row-1, col-1), min(2*n-row-1, 2*n-col-1)))<<" ";
        cout<<endl;
    }

    return 0;
}

// Output-

// Enter number for pattern: 4
// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4 
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4 
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4 