

/* My C++  Solution of Leetcode problem 345. Reverse Vowels of a String*/


class Solution {
public:
   bool isVowel(char i){
            if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u' or
               i=='A' or i=='E' or i=='I' or i=='O' or i=='U'){
                   return true;
               }
            return false;
    }

    string reverseVowels(string s) {
        int i=0;
        int j=s.size() -1;
        while(i<j){
            if(isVowel(s[i]) and isVowel(s[j])){
                swap(s[i] , s[j]);
                i++;
                j--;
            }else if(!isVowel(s[i]) and isVowel(s[j])){
                i++;
            }else{
                j--;
            }
        }

        return s;
        
    }
};
