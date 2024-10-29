


/* My solution of Leetcode problem  7. Reverse Integer */



class Solution {
public:
    int reverse(int x) {
          long r=0;      // decleare r 
                  while(x){
                     r=r*10+x%10; // find remainder and add its to r
                              x=x/10;
                  }
                  if(r>INT_MAX || r<INT_MIN) return 0; // check range if r is outside the range then return 0  
                          return int(r);  // if r in the 32 bi

        
    }
};
