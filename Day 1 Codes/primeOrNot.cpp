#include<iostream>
using namespace std;

int main() {

    int num;
    bool isPrime=true;

    cout<<"Enter a number: ";
    cin>>num;

    if(num==0 || num==1){
        cout<<"Neither prime nor composite"<<endl;
        goto jump;
    }

    else if(num<0){
        cout<<"Enter positive number"<<endl;
        goto jump;
    }

    for(int i=2; i<num; i++)
            if(num%i==0)
                isPrime=false;

        if(isPrime)
          cout<<"Prime"<<endl;
        else
        {
            cout<<"Not Prime"<<endl;
        }
        

    jump :return 0;
    
}