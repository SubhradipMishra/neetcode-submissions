class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n =  temp.size() ; 
        vector<int>ngi(n , 0);
        stack<int>st; 
        // ngi[n-1] =  0 ;
        st.push(n-1); 
        for(int  i  =  n - 2;  i>=0 ; i--){
            
             while(!st.empty() && temp[st.top()]<= temp[i] ) st.pop() ; 
             if(!st.empty())ngi[i] = st.top()-i;
         
             st.push(i) ;
        }

        return ngi ; 
    }
};
