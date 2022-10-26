#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter a number for pattern: ";
    cin>>n;

    int row=1;

    while(row<=n) {

        int col=1;

        while(col<=n-row+1) {
            cout<<col<<"   ";
            col++;
        }

        int i=1;

        while(i<row) {
            cout<<"*   ";
            i++;
        }

        int j=1;

        while(j<row) {
            cout<<"*   ";
            j++;
        }

        col=n-row+1;

        while(col>=1) {
            cout<<col<<"   ";
            col--;
        } 

        cout<<"\n"<<endl;
        row++;
    }

    return 0;

}

// Output-

// Enter a number for pattern: 5
// 1   2   3   4   5   5   4   3   2   1   

// 1   2   3   4   *   *   4   3   2   1   

// 1   2   3   *   *   *   *   3   2   1   

// 1   2   *   *   *   *   *   *   2   1   

// 1   *   *   *   *   *   *   *   *   1  