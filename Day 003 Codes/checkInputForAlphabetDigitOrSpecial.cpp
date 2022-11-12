#include<iostream>
using namespace std;

int main() {

    char c;

    cout<<"Enter any alphabet, digit or special character: ";
    cin>>c;

    if(c>=65 && c<=122)
        cout<<c<<" is Alphabet"<<endl;
    else if(c>=48 && c<=57)
        cout<<c<<" is Digit"<<endl;
    else
        cout<<c<<" is Special Character"<<endl;

    return 0;

}

// Output-

// Enter any alphabet, digit or special character: a
// a is Alphabet

// Enter any alphabet, digit or special character: 9
// 9 is Digit

// Enter any alphabet, digit or special character: $
// $ is Special Character