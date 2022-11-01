#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number: ";
    cin>>n;

    int row=1;
    int i=n*n;

    while(row<=n) {
        int col=1;
        while(col<=n) {
            cout<<i<<"   ";
            col++;
            i--;
        }
        cout<<"\n"<<endl;
        row++;
        i=i;
    }

    return 0;
    
}

// Output-

// Enter number: 3
// 9   8   7   

// 6   5   4   

// 3   2   1 