class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();
        
        if (n2 < n1) return false;

        unordered_map<char, int> original;
        for (char ch : s1) {
            original[ch]++;
        }

        int i = 0, j = 0;
        unordered_map<char, int> mp = original;

        while (j < n2) {
            // If char not in s1 → reset window
            if (original.find(s2[j]) == original.end()) {
                j++;
                i = j;
                mp = original;  // 🔥 RESET MAP
                continue;
            }

            // valid char → reduce freq
            mp[s2[j]]--;

            // if freq becomes negative → shrink from left
            while (mp[s2[j]] < 0) {
                mp[s2[i]]++;
                i++;
            }

            // check window size
            if (j - i + 1 == n1) {
                return true;
            }

            j++;
        }

        return false;
    }
};