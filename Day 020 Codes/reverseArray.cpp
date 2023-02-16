#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> vArr);
void reverseArray(vector<int> vArr, int size);

int main() {

    vector<int> vArr;

    int size, element;

    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Enter the elements of array: ";

    for(int i=0; i<size; i++) {
        cin>>element;
        vArr.push_back(element);
    }

    cout<<"Before Swaping: ";

    printArray(vArr);

    // function is not working

    int i=0, j=size-1;

    while(i<=j) {
        swap(vArr[i], vArr[j]);
        i++;
        j--;
    }

    cout<<"\nAfter Swaping: ";

    printArray(vArr);

    return 0;
}

void printArray(vector<int> vArr) {
    for(auto &k : vArr)
        cout<<k<<" ";
}

void reverseArray(vector<int> vArr, int size) {

    int i=0, j=size-1;

    while(i<=j) {
        swap(vArr[i], vArr[j]);
        i++;
        j--;
    }
}