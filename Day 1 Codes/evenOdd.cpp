#include<iostream>
using namespace std;

int main() {

    int i;
    
    cout<<"Enter an integer: ";
    cin>>i;

    if(i%2==0)
        cout<<i<<" is even number"<<endl;
    else
        cout<<i<<" is odd number"<<endl;
    
    return 0;
    
}