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