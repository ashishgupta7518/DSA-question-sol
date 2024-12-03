


/**************************************************************** C++ ****************************************************************/

//T.C : O(n)
//S.C : O(1)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(nums[i] != 0){
                swap(nums[j],nums[i]);
                j++;
            }
        }
        
        
    }
};
