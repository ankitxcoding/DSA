#include<iostream>
using namespace std;

int main() {
    
    int a, b, c;

    cout<<"Enter sides of a tringle: ";
    cin>>a>>b>>c;

    if(a==b && b==c)
        cout<<"Equilateral Triangle"<<endl;
    else if(a==b || b==c || c==a)
        cout<<"Isoscales Trianle"<<endl;
    else
        cout<<"Scalene Triangle"<<endl;

        return 0;
        
}