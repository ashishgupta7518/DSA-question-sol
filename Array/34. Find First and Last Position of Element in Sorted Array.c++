

 /* My Leetcode Solution Of 34. Find First and Last Position of Element in Sorted Array */

/* Linear Search Approach */

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        

        int firstOcc = -1;
        int lastOcc =  -1;

        for(int i=0;i<nums.size();i++){
            if(nums[i] == target){
                firstOcc = i;
                break;
            }
        }

        for(int i= nums.size()-1 ;i>=0 ; i--){
            if(nums[i] == target){
                lastOcc = i;
                break;
            }
        }

        return {firstOcc, lastOcc};

        
    }
};



/* Binary- Search Approach */


class Solution {
public:

int binarySearch(vector<int>& nums, int target, bool isSearchingLeft){
    int start = 0;
    int end = nums.size()-1;
    int idx = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(nums[mid] > target){
            end = mid -1;
        }else if(nums[mid] < target){
            start = mid + 1;
        }else{

            if(isSearchingLeft){
                idx = mid;
                end = mid -1;

            }else{
                idx = mid;
                start = mid +1;
            }
           
        }
    }
    return idx ; 


}
    vector<int> searchRange(vector<int>& nums, int target) {
       
        vector<int> result = {-1, -1};
        int left = binarySearch(nums, target, true);
        int right = binarySearch(nums, target, false);
        result[0] = left;
        result[1] = right;
        return result; 

        
    }
};
