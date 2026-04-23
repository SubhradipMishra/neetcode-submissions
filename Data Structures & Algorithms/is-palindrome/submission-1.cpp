class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0;
        int j = n - 1;

        while (i < j) {
            char a = (char)tolower(s[i]);
            char b = (char)tolower(s[j]);

            int x = (int)a;
            int y = (int)b;

            if (
                ((x >= 48 && x <= 57) || (x >= 97 && x <= 122)) &&
                ((y >= 48 && y <= 57) || (y >= 97 && y <= 122))
            ) {
                if (x != y) return false;
                else {
                    i++;
                    j--;
                }
            }
            else {
                if (!((x >= 48 && x <= 57) || (x >= 97 && x <= 122)))
                    i++;
                else
                    j--;
            }
        }
        return true;
    }
};