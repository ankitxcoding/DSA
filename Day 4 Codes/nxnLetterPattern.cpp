#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number: ";
    cin>>n;

    int row='A';

    while(row<=n) {
        int col='A';
        while(col<=n) {
            cout<<col<<"   ";
            col++;
        }
        cout<<"\n"<<endl;
        row++;
    }

    return 0; 
    
}