class Solution {
public:
    bool helper(vector<int>& piles , int n , int h , int mid){
        int count =  0 ;
        for(int i  =  0 ; i <  n ; i++){
            if(piles[i] <=  mid) count++ ;
            else{
                if(piles[i] % mid == 0) count+= piles[i]/mid ;
                else count += (piles[i]/mid) +1 ;
            }
        }

        return count <= h ;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n =  piles.size() ;
        int maxi = INT_MIN ; 
        for(int i  =  0  ; i < n ; i++){
            maxi = max(piles[i] , maxi) ; 
        }

        int lo = 1 ;
        int hi = maxi ;
        int ans  ;
        
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(helper(piles , n  , h , mid)){
                ans = mid ; 
                hi = mid-1;
            }
            else lo = mid+1;

        }

        return lo ; 

    }
};
