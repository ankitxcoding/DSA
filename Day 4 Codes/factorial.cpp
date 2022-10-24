#include<iostream>
using namespace std;

int main() {

    int n, i=1, f=1;

    cout<<"Enter a number to find Factorial: ";
    cin>>n;

    if(n==0) {
        cout<<"Factorial of 0 is 1"<<endl;
    }
    else if(n>=1) {
        while(i<=n) {
            f*=i;
            i++;
        }
        cout<<"Factorial of "<<n<<" is "<<f<<endl;
    }
    else{
        cout<<"Enter +ve number"<<endl;
    }

    return 0;

}

// Output-

// Enter a number to find Factorial: 5
// Factorial of 5 is 120