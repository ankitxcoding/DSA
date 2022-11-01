#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number: ";
    cin>>n;

    int row=1;
    int i=1;

    while(row<=n) {
        int col=1;
        while(col<=n) {
            cout<<i<<"   ";
            col++;
            i++;
        }
        cout<<"\n"<<endl;
        row++;
        i=i;
    }

    return 0;
    
}

// Output-

// Enter number: 3
// 1   2   3   

// 4   5   6   

// 7   8   9   