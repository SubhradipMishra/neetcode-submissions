class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
      int n = nums.size() ;
      int i = 0 ;
      int j = n-1 ;
      vector<int>ans; 
      while(i < j){
        int x = nums[i]+nums[j] ;
        if(x > k) j--;
        else if(x < k ) i++;
        else {
            ans.push_back(i+1) ;
            ans.push_back(j+1) ;
            break ;
        }
      }

      return ans ; 
    }
};
