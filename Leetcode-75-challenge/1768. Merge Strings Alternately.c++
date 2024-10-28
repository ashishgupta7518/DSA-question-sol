

/* My solution Of Leetcode Problem   1768. Merge Strings Alternately  */

/* my C++ solution */


class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int n = word1.size();
        int m = word2.size();
        int i = 0;
        int j = 0;
        string word = "";

        while (i < n || j < m) {

            if (i < n) {
                word += word1[i];
                i++;
            }
             if (j < m) {
                word += word2[j];
                j++;
            }
        }

        return word;
    }
};
