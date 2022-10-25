#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++) {
        if(n%2==0)
            continue;
            cout<<i<<endl;
        else
            cout<<"continue executed"<<endl;
    }

    return 0;
}