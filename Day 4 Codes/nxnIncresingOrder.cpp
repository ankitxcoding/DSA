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