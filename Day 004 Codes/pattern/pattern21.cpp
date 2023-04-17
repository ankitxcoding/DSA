#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number for pattern: ";
    cin>>n;

    for(int row=1; row<=n; row++) {
        int pattern=row==1 || row==n? pattern= n: n-(n-1);
        int spaces=row>1 && row<n? spaces= n-(n-1): 0;
        for(int col=1; col<=pattern; col++)
            cout<<"* ";
        for(int col=1; col<=(n-2)*spaces; col++)
            cout<<"  ";
        for(int col=1; col<=spaces; col++)
            cout<<"* ";
        cout<<endl;
    }

    return 0;
}

// Output-

// Enter number for pattern: 5
// * * * * * 
// *       * 
// *       * 
// *       * 
// * * * * * 