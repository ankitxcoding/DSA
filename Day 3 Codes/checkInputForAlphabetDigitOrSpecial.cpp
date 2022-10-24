#include<iostream>
using namespace std;

int main() {

    char c;

    cout<<"Enter any alphabet, digit or special character: ";
    cin>>c;

    if(c>=65 && c<=122)
        cout<<"Alphabet"<<endl;
    else if(c>=48 && c<=57)
        cout<<"Digit"<<endl;
    else
        cout<<"Special Character"<<endl;

    return 0;

}