#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number: ";
    cin>>n;

    int row=1, i=1;

    while(row<=n) {
        int col=1;
        i=row;
        while(col<=row) {
            cout<<i<<"   ";
            i--;
            col++;
        }
        cout<<"\n"<<endl;
        row++;
    }

    return 0; 
    
}

// Output-

// Enter number: 3
// 1   

// 2   1   

// 3   2   1  