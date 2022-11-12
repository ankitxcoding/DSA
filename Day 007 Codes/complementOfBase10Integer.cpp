#include<iostream>
using namespace std;

int main() {

    int decimal, binary=1;

    cout<<"Enter decimal number: ";
    cin>>decimal;

    while(binary<=decimal) {
        decimal=decimal^binary;
        binary=binary<<1;
    }

    cout<<decimal;

    return 0;
    
}

// Output-

// Enter decimal number: 5
// 2

// Enter decimal number: 10
// 5