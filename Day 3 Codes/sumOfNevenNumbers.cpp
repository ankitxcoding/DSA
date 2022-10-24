#include<iostream>
using namespace std;

int main() {

    int n, i=2, sum=0;

    cout<<"Enter the n: ";
    cin>>n;

    while(i<=n) {
        sum+=i;
        i+=2;
    }

    cout<<"The sum of n even numbers is: "<<sum<<endl;

    return 0;
    
}