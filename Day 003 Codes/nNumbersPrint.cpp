#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number: ";
    cin>>n;

    int row=0;

    while(row<n) {

        int col=0;

        while(col<n) {
            cout<<"    "<<row;
            col++;
        }

        cout<<"\n"<<endl;
        row++;
    }

    return 0;
    
}

// Output-

// Enter number: 3
//     0    0    0

//     1    1    1

//     2    2    2