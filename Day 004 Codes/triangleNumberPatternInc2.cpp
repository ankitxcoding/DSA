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
            i++;
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