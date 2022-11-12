#include<iostream>
using namespace std;

int main() {

    int integer, count=0;

    cout<<"Enter an integer number: ";
    cin>>integer;

    while(integer) {
        if(integer & 1) {
            count++;
        }

        integer=integer>>1;
    }

    cout<<count;

    return 0;

}

// Output-

// Enter binary number: 10
// 2