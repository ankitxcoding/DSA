#include<iostream>
using namespace std;

int setBitCounter(int a, int b);

int main() {

    int a, b, x, y;
    int ans1, ans2;

    ans1=setBitCounter(a, b);
    ans2=setBitCounter(x, y);

    cout<<ans1+ans2;

    return 0;

}

int setBitCounter(int a, int b) {

    int integer, count=0;

    cout<<"Enter an integer number: ";
    cin>>integer;

    while(integer) {
        if(integer & 1) {
            count++;
        }

        integer=integer>>1;
    }

    return count;

}

// Output-

// Enter an integer number: 10
// Enter an integer number: 15
// 6