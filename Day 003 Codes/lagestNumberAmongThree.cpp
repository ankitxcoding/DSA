#include<iostream>
using namespace std;

int main() {
    
    int a, b, c;

    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;

    cout<<"Enter c: ";
    cin>>c;

    if(a>b && a>c)
        cout<<"a is bigger than b & c"<<endl;
    else if(b>a && b>c)
        cout<<"b is bigger than a & c"<<endl;
    else
        cout<<"c is bigger than a & b"<<endl;

        return 0;
        
}

// Output-

// Enter a: 7   
// Enter b: 8
// Enter c: 9
// c is bigger than a & b