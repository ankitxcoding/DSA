#include<iostream>
using namespace std;

int main() {

    int n, sum=0;

    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n ; i++)
        sum+=i;

    cout<<"Sum of 1 to "<<n<<" numbers is "<<sum<<endl;

    return 0;

}

// Output-

// Enter a number: 100
// Sum of 1 to 100 numbers is 5050