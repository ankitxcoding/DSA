#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number: ";
    cin>>n;

    int row=1;

    while(row<=n) {
        char c='A'+row-1;
        int col=1;
        while(col<=row) {
            cout<<c<<"   ";
            col++;
            c++;
        }
        cout<<"\n"<<endl;
        row++;
    }

    return 0; 
    
}

// Output-

// Enter number: 3
// A   

// B   C   

// C   D   E   