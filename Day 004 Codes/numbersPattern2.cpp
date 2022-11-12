#include<iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter numbers of pattern for print: ";
    cin>>n;

    int row=1;

    while(row<=n) {
        int i=1;

        while(i<=n-row) {
            cout<<"    ";
            i++;
        }
        int col=1;

        while(col<=row) {
            cout<<row<<"   ";
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

//         2   2   

//     3   3   3   

// 4   4   4   4