#include<iostream>
using namespace std;

int main() {

    int digit,subtract;
    
    cout<<"Enter Digit: ";
    cin>>digit;

    int sum=0, product=1;

    while(digit) {

        product*=digit%10;
        sum+=digit%10;
        digit/=10;
    }

    cout<<"The product of digit = "<<product<<endl;
    cout<<"The sum of digit = "<<sum<<endl;
    
    subtract=product-sum;
    cout<<"After Product - Sum i.e ( "<<product<<" - "<<sum<<" ) = "<<subtract<<endl;

    return 0;

}

// Output-

// Enter Digit: 124
// The product of digit = 8
// The sum of digit = 7
// After Product - Sum i.e ( 8 - 7 ) = 1