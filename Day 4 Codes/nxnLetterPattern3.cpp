#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number: ";
    cin>>n;

    int row=1;
    char c='A';

    while(row<=n) {
        int col=1;
        while(col<=n) {
            cout<<c<<"   ";
            col++;
            c++;
        }
        cout<<"\n"<<endl;
        row++;
        c=c-2;
    }

    return 0; 
    
}

// Output-

// Enter number: 3
// A   B   C   

// B   C   D   

// C   D   E 