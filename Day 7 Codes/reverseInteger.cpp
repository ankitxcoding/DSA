#include<iostream>
using namespace std;

int main() {

    long long int number, digit=0, reverse=0;

    cout<<"Enter the number: ";
    cin>>number;

    while(number) {
        digit=number%10;
        reverse=reverse*10+digit;
        number/=10;
    }

    cout<<"Reverse of number: "<<reverse;

    return 0;
}

// Output-

// Enter the number: 123
// Reverse of number: 321