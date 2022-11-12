#include<iostream>
using namespace std;

int main() {
    
    int n, i=1, sum=0;

    cout<<"Enter the n: ";
    cin>>n;

    while(i<=n){
        sum+=i;
        i++;
    }

    // for(i=1; i<=n; i++)
    //     sum+=i;
    
    cout<<"The sum of 1-"<<n<<" is: "<<sum<<endl;

    return 0;

}

// Output-

// Enter the n: 100
// The sum of 1-100 is: 5050