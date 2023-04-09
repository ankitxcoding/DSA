#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int nonZero=0;

        int size=nums.size();

        for(int i=0; i<size; i++) {

            if(nums[i]!=0) {
                swap(nums[nonZero], nums[i]);
                nonZero++;
            }
        }
    }
};