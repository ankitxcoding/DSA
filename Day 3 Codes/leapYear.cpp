#include<iostream>
using namespace std;

int main() {

    int y;

    cout<<"Enter a year for check: ";
    cin>>y;

    if((y%4==0 && y%100!=0) || y%400==0)
        cout<<y<<" is a Leap Year"<<endl;
    else
        cout<<y<<" is not a Leap Year"<<endl;

        return 0;
        
}

// Output-

// Enter a year for check: 2000
// 2000 is a Leap Year

// Enter a year for check: 2011
// 2011 is not a Leap Year

// Enter a year for check: 1900
// 1900 is not a Leap Year