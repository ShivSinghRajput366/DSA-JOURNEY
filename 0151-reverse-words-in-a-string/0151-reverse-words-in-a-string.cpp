class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans;

        int i = n - 1;
        int j = n - 1;

        while (i >= 0) {

            // spaces skip
            while (i >= 0 && s[i] == ' ') {
                i--;
            }

            // agar spaces skip karte karte string khatam ho gayi,
            // to koi word bacha hi nahi -> break
            if (i < 0) break;

            j = i;

            // word ka starting point
            while (j >= 0 && s[j] != ' ') {
                j--;
            }

            // next word se pehle space
            if (!ans.empty()) {
                ans += ' ';
            }

            // word copy
            for (int k = j + 1; k <= i; k++) {
                ans += s[k];
            }

            // next word
            i = j - 1;
        }

        return ans;
    }
};