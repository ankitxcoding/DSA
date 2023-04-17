#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number for pattern: ";
    cin>>n;

    for(int row=0; row<2*n; row+=2) {
        for(int col=0; col<2*n-row-2; col++)
            cout<<" ";
        for(int col=0; col<=row; col++)
            cout<<"* ";
        cout<<endl;
    }

    for(int row=0; row<2*n; row+=2) {
        for(int col=0; col<row; col++)
            cout<<" ";
        for(int col=0; col<2*n-row-1; col++)
            cout<<"* ";
        cout<<endl;
    }

    return 0;
}

// Output-

// Enter number for pattern: 5
//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 
// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 