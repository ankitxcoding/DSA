#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter numbers of pattern for print: ";
    cin>>n;

    int row=0;

    while(row<n) {

        int col=0;

        while(col<n) {
            cout<<"*    ";
            col++;
        }

        cout<<"\n"<<endl;
        row++;
    }

    return 0;
    
}