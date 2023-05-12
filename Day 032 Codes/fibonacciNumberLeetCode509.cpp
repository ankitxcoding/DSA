#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        int x=0, y=1, temp;
        if(n==0) return 0;
        for(int i=1; i<n; i++) {
            temp=x;
            x=y;
            y+=temp;
        }
        return y;
    }
};