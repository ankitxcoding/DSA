#include<iostream>
#include<algorithm>
using namespace std;

int main() {

    int a, b;

    cout<<"Enter an integer: ";
    cin>>a;

    cout<<"Enter an other integer: ";
    cin>>b;

    cout<<"Value before swap:"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    swap(a,b);

    cout<<"Value after swap:"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    return 0;

}