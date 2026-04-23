class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int n = nums.size() ;
        if(n == 0)  return 0 ;  
        int count = 0;
        int maxCount = 1 ;

        for(int x :  nums)st.insert(x)  ;

        for(auto it : st){
            if(st.find(it-1) == st.end()){
                int cnt = 1 ;
                int el = it ;
                while(st.find(el + 1 ) != st.end()){
                    cnt++;
                    el++ ;
                }

                maxCount = max(maxCount , cnt) ; 
            }
        }

        return maxCount ;
    }
};
