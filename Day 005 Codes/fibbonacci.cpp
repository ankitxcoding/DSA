#include<iostream>
using namespace std;

int main() {

    int n, i, x=0, y=1;

    cout<<"Enter a number to find fibonacci sequence till that number: ";
    cin>>n;

    cout<<x<<" "<<y<<" ";

    for(i=0; i<n-i/2 ; i++) {
        i=x+y;
        x=y;
        y=i;
        cout<<i<<" ";
    }

    return 0;

}

// Output-

// Enter a number to find fibonacci sequence till that number: 100
// 0 1 1 2 3 5 8 13 21 34 55 89