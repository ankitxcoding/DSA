#include<iostream>
using namespace std;

int main () {

    double c, f;

    cout<<"Enter the value of Celcius for conversion: ";
    cin>>c;

    f=c*1.8+32;

    cout<<c<<" Celsius in Fahrenheit is: "<<f<<endl;

    return 0;

}