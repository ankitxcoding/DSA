#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number: ";
    cin>>n;

    int row=1;

    while(row<=n) {
        int col=n;
        while(col>0) {
            cout<<col<<"   ";
            col--;
        }
        cout<<"\n"<<endl;
        row++;
    }

    return 0;
    
}

// Output-

// Enter number: 3
// 3   2   1   

// 3   2   1   

// 3   2   1   