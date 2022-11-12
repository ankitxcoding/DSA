#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter numbers of pattern for print: ";
    cin>>n;

    int row=1;

    while(row<=n) {
        int i=1;

        while(i<=row-1) {
            cout<<"    ";
            i++;
        }
        int col=1;

        while(col<=n-row+1) {
            cout<<"*   ";
            col++;
        }


        cout<<"\n"<<endl;
        row++;
    }

    return 0;
    
}

// Output-

// Enter numbers of pattern for print: 4
// *   *   *   *   

//     *   *   *   

//         *   *   

//             *   