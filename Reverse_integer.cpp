//Here we have to return o if the x reversed x value exceed the INT_MAX and also dont forgot to take the long long to X they passing.


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
