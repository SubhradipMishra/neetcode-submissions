#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        if(nums.size() == 0) return 0;

        int currLen = 1;
        int n = nums.size();
        int maxLen = 1;

        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i-1]) continue; 
            
            if(nums[i] - 1 == nums[i-1]) currLen++;
            else {
                maxLen = max(maxLen, currLen);
                currLen = 1;
            }
        }

        return max(maxLen, currLen);
    }
};