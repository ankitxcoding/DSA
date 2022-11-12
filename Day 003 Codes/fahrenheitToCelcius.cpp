#include<iostream>
using namespace std;

int main() {

    double f, c;

    cout<<"Enter the value of Fahrenheit for conversion: ";
    cin>>f;

    c=(f-32)*5/9;

    cout<<f<<" Fahrenheit in Celcius is: "<<c<<endl;

    return 0;
    
}

// Output-

// Enter the value of Fahrenheit for conversion: 98.6
// 98.6 Fahrenheit in Celcius is: 37