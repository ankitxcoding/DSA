#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number for pattern: ";
    cin>>n;

    for(int row=1; row<=n; row++) {
        int temp=row;
        for(int col=1; col<=row; col++)
            cout<<col<<" ";
        for(int col=1; col<=n-row; col++)
            cout<<"    ";
        for(int col=1; col<=row; col++) {
            cout<<temp<<" ";
            temp--;
        }
        cout<<endl;
    }

    return 0;
}

// Output-

// Enter number for pattern: 5
// 1                 1 
// 1 2             2 1 
// 1 2 3         3 2 1 
// 1 2 3 4     4 3 2 1 
// 1 2 3 4 5 5 4 3 2 1 