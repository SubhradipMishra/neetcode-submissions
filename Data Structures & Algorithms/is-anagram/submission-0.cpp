class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false; 
        unordered_map<char,int>mps ;
        unordered_map<char,int>mpt ; 

        for(int i =  0 ; i < s.size() ; i++){
            mps[s[i]]++;
            mpt[t[i]]++;
        }

        for(auto &x :  mps){
           if(mps[x.first] != mpt[x.first]) return false ; 
        }


        return true ;
    }
};
