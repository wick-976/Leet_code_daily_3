class Solution {
public:
    bool isPowerOfThree(int n) {

        if(n <=0) return false;

        while(n%3==0)
        {
            n/=3;
        }

        if(n==1) return true;


    return false;
        
    }
};// this is not a optimal solution, but it works anyway we wiil look for the optimal!!