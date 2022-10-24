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
        while(col<=row) {
            cout<<c<<"   ";
            col++;
        }
        cout<<"\n"<<endl;
        row++;
        c++;
    }

    return 0; 
    
}

// Output-

// Enter number: 3
// A   

// B   B   

// C   C   C   