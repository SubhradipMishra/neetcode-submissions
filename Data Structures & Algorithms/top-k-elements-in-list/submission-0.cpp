#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;  // element -> frequency
        
        // Count frequency
        for(int x : nums){
            mp[x]++;
        }

        // Max heap (frequency, element)
        priority_queue<pair<int,int>> pq;
        
        for(auto x : mp){
            pq.push({x.second, x.first});
        }

        vector<int> ans;

        // Get top k elements
        while(k-- && !pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};