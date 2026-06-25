class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        long long  ver=x;
        while(x > 0)
        {
            long long  rem=x%10;
            rev=rev*10+rem;
            x/=10;
        }
        if(rev==ver)
        {
            return true;
        }
        else return false;

    }
};