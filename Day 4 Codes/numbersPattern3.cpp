#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter numbers of pattern for print: ";
    cin>>n;

    int row=1, num=1;

    while(row<=n) {
        int i=1;

        while(i<=n-row) {
            cout<<"    ";
            i++;
        }
        int col=1;

        while(col<=row) {
            cout<<num<<"   ";
            num++;
            col++;
        }


        cout<<"\n"<<endl;
        row++;
    }

    return 0;
    
}

// Output-

// Enter numbers of pattern for print: 4
//             1   

//         2   3   

//     4   5   6   

// 7   8   9   10   