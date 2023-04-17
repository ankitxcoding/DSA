#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number for pattern: ";
    cin>>n;

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

// PS C:\Users\ANKIT\Documents\cAndCppPractice> cd "c:\Users\ANKIT\Documents\cAndCppPractice\pattern\" ; if ($?) { g++ star5.cpp -o star5 } ; if ($?) { .\star5 }
// Enter number for pattern: 5
// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 