#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number: ";
    cin>>n;

    int row=1;

    while(row<=n) {
        char c='A'+n-row;
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
// C   

// B   C   

// A   B   C   