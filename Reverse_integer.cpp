class Solution {
public:
    int reverse(int x) {
        long long   absoulte_x=abs((long long)x);
        long long   rev=0;

        while(absoulte_x>0)
        {
            int digit=absoulte_x%10;
            rev=rev*10+digit;
            absoulte_x/=10;
        }
        if(rev > INT_MAX) return 0;
        if(x>=0)
        {
            return rev;
        }
        else 
        {
            return -rev;
        }
    }
};