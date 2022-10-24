#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number: ";
    cin>>n;

    int row=0;

    while(row<n) {

        int col=0;

        while(col<n) {
            cout<<"    "<<row;
            col++;
        }

        cout<<"\n"<<endl;
        row++;
    }

    return 0;
    
}