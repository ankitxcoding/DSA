#include<iostream>
using namespace std;

int main() {

    char c = 'a';
    int i = 1;
    float f = 1.1f;
    double d = 1.11111;
    bool isTrue = true;

    cout<<sizeof(c)<<endl;
    cout<<sizeof(i)<<endl;
    cout<<sizeof(f)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(isTrue)<<endl;

    cout<<"\n";

    cout<<sizeof(char)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(bool)<<endl;

    return 0;
    
}

// Output-

// 1
// 4
// 4
// 8
// 1

// 1
// 4
// 4
// 8
// 1