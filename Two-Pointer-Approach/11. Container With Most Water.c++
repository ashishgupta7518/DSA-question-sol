

/* My solution of C++ problem  11. Container With Most Water  */

/* 1st Approach*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();

        int i=0;
        int j=n-1;

        int maxWater = 0;

        while(i<j){
            int w = j-i;
            int h = min(height[i] , height[j]);
            int area = w*h;
            maxWater = max(maxWater,area);

            if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }

        }
        return maxWater;
        
    }
};



/* 2nd Approach   */




class Solution {
public:
    int maxArea(vector<int>& height) {
    
        int b1=0;
        int b2=height.size()-1;
        int result=0;
        while(b1<b2){
            int curmax=(b2-b1)*min(height[b1],height[b2]);
            if(height[b1]<height[b2]){
                b1++;
            }else{
                b2--;
            }
            result=max(result,curmax);
        }
        return result;
    }
};




