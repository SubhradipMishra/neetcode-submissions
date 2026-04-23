class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int n = nums.size() ; 
         int p  = 1 ;
         vector<int>pre(n);
         pre[0]  = 1 ; 
         for(int i  = 1 ; i < n ; i++){
             p *= nums[i-1] ; 
             pre[i] =  p;
         }

         vector<int>suf(n) ;
         int s = 1 ; 
         suf[n-1] = pre[n-1] ;
         for(int i =  n-2 ; i >= 0 ;i--){
            s *= nums[i+1];
            suf[i] = s*pre[i]; 
         }


         



         return suf; 
    }
};
