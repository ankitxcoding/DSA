#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter numbers of pattern for print: ";
    cin>>n;

    int row=1;

    while(row<=n) {

        int col=1;

        while(col<=row) {
            cout<<"    "<<row;
            col++;
        }

        cout<<"\n"<<endl;
        row++;
    }

    return 0;
    
}