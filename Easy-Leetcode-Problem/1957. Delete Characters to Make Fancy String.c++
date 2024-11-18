/*     My Solution Of Leetcode Problem 1957. Delete Characters to Make Fancy String    */


/*  Approach 1 */

class Solution {
public:
    string makeFancyString(string s) {
      string ans = "";
        int n = s.size();
        ans.push_back(s[0]);
        int count = 1;

        for(int i=1;i<n;i++){
            if(s[i] == ans.back()){
                count++;
                if(count < 3){
                    ans.push_back(s[i]);
                }
            }else{
                ans.push_back(s[i]);
                count = 1;
            }

        }
        return ans;
        
    }
};


/*  Approach 2 */


class Solution {
public:
    string makeFancyString(string s) {
       string ans = "";
    int count = 0; // To count consecutive occurrences of the same character

    for (int i = 0; i < s.size(); i++) {
        // If it's the same as the previous character, increment count
        if (i > 0 && s[i] == s[i - 1]) {
            count++;
        } else {
            // Reset count for a new character
            count = 1;
        }

        // Add the character to the result if it doesn't exceed two consecutive occurrences
        if (count < 3) {
            ans.push_back(s[i]);
        }
    }

    return ans;
    }
};







