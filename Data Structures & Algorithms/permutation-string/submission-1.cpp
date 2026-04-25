class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size(), n2 = s2.size();
        if (n1 > n2) return false;

        vector<int> freq(26, 0);

        // Build frequency of s1
        for (char c : s1) {
            freq[c - 'a']++;
        }

        int i = 0, j = 0;
        int count = n1;  // total chars to match

        while (j < n2) {
            // If char contributes to match
            if (freq[s2[j] - 'a'] > 0) {
                count--;
            }

            // Always decrease freq
            freq[s2[j] - 'a']--;

            // If all chars matched
            if (count == 0) return true;

            // Maintain window size
            if (j - i + 1 == n1) {
                // Before removing s2[i], restore freq
                if (freq[s2[i] - 'a'] >= 0) {
                    count++;
                }
                freq[s2[i] - 'a']++;
                i++;
            }

            j++;
        }

        return false;
    }
};