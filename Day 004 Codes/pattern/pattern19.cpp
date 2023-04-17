#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number for pattern: ";
    cin>>n;

    for(int row=1; row<=2*n; row++) {
        int pattern=row>n? pattern=row-n: n-row+1;
        int spaces=row>n? spaces=2*n-row+1: row;
        int patternMirror=row>n? patternMirror=row-n: n-row+1;
        for(int col=1; col<=pattern; col++)
            cout<<"* ";
        for(int col=1; col<spaces; col++)
            cout<<"    ";
        for(int col=1; col<=patternMirror; col++)
            cout<<"* ";
        cout<<endl;
    }

    return 0;
}

// Output-

// Enter number for pattern: 5
// * * * * * * * * * * 
// * * * *     * * * * 
// * * *         * * * 
// * *             * * 
// *                 * 
// *                 * 
// * *             * * 
// * * *         * * * 
// * * * *     * * * * 
// * * * * * * * * * * 