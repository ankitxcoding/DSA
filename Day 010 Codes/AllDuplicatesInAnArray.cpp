#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int>answer;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size()-1; i++)
            if(nums[i]==nums[i+1])
                answer.push_back(abs(nums[i]));
        
        return answer;
        
    }
};