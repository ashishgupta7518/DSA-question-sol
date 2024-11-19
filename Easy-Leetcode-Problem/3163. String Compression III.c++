


/* Solution Of Leetcode Problem  3163. String Compression III*/
/* Approach 1*/

class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int cnt = 1, n = word.size();
        char ch = word[0];
        for(int i=1;i<n;i++){
            if(word[i] == ch && cnt < 9)cnt++;
            else{
                comp.push_back(cnt+'0');
                comp.push_back(ch);
                ch = word[i];
                cnt = 1;
            }
        }
        comp.push_back(cnt+'0');
        comp.push_back(ch);
        return comp;
    }
};


/* Approach 2*/



class Solution {
public:
    string compressedString(string word) {
        string ans = "";
        int i =0;
        while(i<word.size()){
            char ch = word[i];
            int count =0;
            while(i < word.size() && word[i] == ch && count < 9){
                i++;
                count++;
            }
            ans += to_string(count) + ch;
        }
        return ans;
        
    }
};
