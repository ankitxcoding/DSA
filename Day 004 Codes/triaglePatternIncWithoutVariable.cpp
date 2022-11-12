#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number: ";
    cin>>n;

    // for(int i=1; i<=n; i++) {
    //     for(int j=i; j<i*2; j++) {
    //         cout<<j<<"   ";
    //     }
    //     cout<<"\n"<<endl;
    // }

    int row=1;

    while(row<=n) {
        int col=row;
        while(col<row*2) {
            cout<<col<<"   ";
            col++;
        }
        cout<<"\n"<<endl;
        row++;
    }

    return 0; 
    
}

// Output-

// Enter number: 4
// 1   

// 2   3   

// 3   4   5   

// 4   5   6   7 