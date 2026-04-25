class Solution {
public:
    int maxArea(vector<int>& heights) {
        int  n = heights.size() ; 
        int  i  =  0 ;
        int  j  = n-1 ; 
        int ans  = INT_MIN ; 
        while(  i < j ){
           int res =  min(heights[i] , heights[j]) *(j-i) ;
           ans = max(ans , res);
           if(heights[i] <  heights[j]) i++;
           else j--;
        }

        return ans ;
    }
};
