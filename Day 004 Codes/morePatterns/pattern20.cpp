#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number for pattern: ";
    cin>>n;

    for(int row=1; row<=2*n; row++) {
        int pattern=row>n? pattern=2*n-row: row;
        int spaces=row>n? spaces=row-n: n-row;
        int patternMirror=row>n? patternMirror=2*n-row: row;
        for(int col=1; col<=pattern; col++)
            cout<<"* ";
        for(int col=1; col<=spaces; col++)
            cout<<"    ";
        for(int col=1; col<=patternMirror; col++)
            cout<<"* ";
        cout<<endl;
    }

    return 0;
}

// Output-

// Enter number for pattern: 5
// *                 * 
// * *             * * 
// * * *         * * * 
// * * * *     * * * * 
// * * * * * * * * * * 
// * * * *     * * * * 
// * * *         * * * 
// * *             * * 
// *                 * 