#include<iostream>
using namespace std;

int main() {

    char c;

    cout<<"Enter alphabet: ";
    cin>>c;

    if(isalpha(c)) {
        if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            cout<<"Vowel"<<endl;
        else
            cout<<"Consonant"<<endl;
    }
    else
        cout<<"Invalid Input"<<endl;

    return 0;

}

// Output-

// Enter alphabet: a
// Vowel

// Enter alphabet: h
// Consonant