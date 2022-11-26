class Solution {
public:
    long long int mySqrt(int x) {
        
        int low, high;
        
        low=0;
        high=x;
        long long int mid=low+(high-low)/2;
        
        long long int answer;
        
        while(low<=high) {
            
            long long int square=mid*mid;
            
            if(square==x)
                return mid;
            else if(square<x){
                answer=mid;
                low=mid+1;
            }
            else
                high=mid-1;
            
            mid=low+(high-low)/2;
            
        }
        
        return answer;
        
    }
};