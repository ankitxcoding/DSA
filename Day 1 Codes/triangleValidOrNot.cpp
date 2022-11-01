#include<iostream>
using namespace std;

int main() {

    double a, b, c;
    
    cout<<"Enter the sides of triangle: ";
    cin>>a>>b>>c;

    if(a+b>c && a+c>b && b+c>a)
        cout<<"Given triangle is valid."<<endl;
    else
        cout<<"Given triangle is not valid!";

    return 0;
    
}

// Output-

// Enter the sides of triangle: 8 5 14
// Given triangle is not valid!