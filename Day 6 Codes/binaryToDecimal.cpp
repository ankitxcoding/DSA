#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int binary;

    cout<<"Enter binary number: ";
    cin>>binary;

    int desimal=0;
    int i=0;

    while(binary!=0) {

        int lastBit = binary % 10;

        if(lastBit==1)
            desimal=(lastBit*pow(2, i))+desimal;

        binary=binary/10;

        i++;

    }

    cout<<"Decimal number is "<<desimal<<endl;

    return 0;
    
}

// Output-

// Enter binary number: 1010
// Decimal number is 10