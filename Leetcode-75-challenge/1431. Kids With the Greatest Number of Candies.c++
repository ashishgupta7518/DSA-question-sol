
 

/* Leetcode problem  -- > 1431. Kids With the Greatest Number of Candies    */

/*  My c++ Solution   */ 


class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         int maximum = INT_MIN;
        vector<bool>ans;
        for(int i=0;i<candies.size();i++){
            maximum = max(maximum , candies[i]);
        }

        for(int i=0;i<candies.size();i++){
            if(candies[i] + extraCandies >= maximum){
               
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }

        return ans;

        
        
    }
};
