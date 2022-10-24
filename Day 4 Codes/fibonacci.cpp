#include<iostream>
using namespace std;

int main() {

    int n, i=0, j=1, f=0;

    cout<<"Enter +ve number to find Fibonacci Series: ";
    cin>>n;

    cout<<"Fibonacci Series: "<<i<<" "<<j<<" ";

    f=i+j;

    while(f<=n) {
        cout<<f<<" ";
        i=j;
        j=f;
        f=i+j;
    }

    return 0;

}