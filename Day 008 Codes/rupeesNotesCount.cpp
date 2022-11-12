#include<iostream>
using namespace std;

int main() {

    int amount;
    int hundred=0, fifty=0, twenty=0, coin=0;

    cout<<"Enter the amount: ";
    cin>>amount;

    switch(1) {

        case 1: cout<<"100 Rupees Notes: "<<(hundred=amount/100)<<endl; amount%=100;

        case 2: cout<<"50 Rupees Notes: "<<(fifty=amount/50)<<endl; amount%=50;

        case 3: cout<<"20 Rupees Notes: "<<(twenty=amount/20)<<endl; amount%=20;

        case 4: cout<<"1 Rupees Coins: "<<(coin=amount/1)<<endl; amount%=1;

    }

    return 0;

}

// Output-

// Enter the amount: 171
// 100 Rupees Notes: 1
// 50 Rupees Notes: 1
// 20 Rupees Notes: 1
// 1 Rupees Coins: 1

// Enter the amount: 1330
// 100 Rupees Notes: 13
// 50 Rupees Notes: 0
// 20 Rupees Notes: 1
// 1 Rupees Coins: 10