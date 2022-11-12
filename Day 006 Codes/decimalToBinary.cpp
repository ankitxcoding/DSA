#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int decimal;

    cout<<"Enter decimal number: ";
    cin>>decimal;

    int bianary=0;
    int i=0;

    while(decimal!=0) {

        int lastBit = decimal & 1;

        bianary=(lastBit*pow(10, i))+bianary;

        decimal=decimal>>1;

        i++;

    }

    cout<<"Binary number is "<<bianary<<endl;

    return 0;
    
}

// Output-

// Enter decimal number: 10
// Binary number is 1010