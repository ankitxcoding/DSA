#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number for pattern: ";
    cin>>n;

    for(int row=0; row<=2*n; row++) {
        int star=row>n? star=2*n-row : row;
            for(int col=0; col<=star; col++)
                cout<<"* ";
            cout<<endl;
    }

    return 0;
}

// Output-

// Enter number for pattern: 5
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 