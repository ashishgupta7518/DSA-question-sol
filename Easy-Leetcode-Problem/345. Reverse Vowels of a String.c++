/************************** C++ Solution   *************************/



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




class Solution {
public:
bool isvowel(char &ch){
    if(ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u'|| ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U'){
        return true;
    }
    return false;
}
    string reverseVowels(string s) {
        
        int n = s.length();
        int i=0;
        int j=n-1;
        while(i<j){
            if(!isvowel(s[i])){
                i++;
            }else if(!isvowel(s[j])){
                j--;
            }else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }

return s;
        }
    
};
