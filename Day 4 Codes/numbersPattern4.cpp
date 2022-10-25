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
            cout<<col<<"   ";
            col++;
        }
        col=row-1;

        while(col>=1) {
            cout<<col<<"   ";
            col--;
        }


        cout<<"\n"<<endl;
        row++;
    }

//     Output-

//     Enter numbers of pattern for print: 4
//             1   

//         1   2   1   

//     1   2   3   2   1   

// 1   2   3   4   3   2   1   

    return 0;
    
}