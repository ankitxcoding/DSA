#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter a number to check: ";
    cin>>n;

    if(n>0) {
        while(n%2==0) {
            n/=2;
        }
        if(n==1) {
            cout<<"Power of two"<<endl;
        }
    }
    if(n==0 || n!=1) {
        cout<<"Not in the power of two"<<endl;
    }

    return 0;

}

// Output-

// Enter a number to check: 8
// Power of two

// Enter a number to check: 7
// Not in the power of two