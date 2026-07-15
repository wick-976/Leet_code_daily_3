//it is not a optimal solution but it is a simple solution to count the number of prime numbers less than a non-negative number, n.

class Solution {
public:
    bool function(int n)
    {
        if(n < 2)
            return false;

        for(int i = 2; i * i <= n; i++)
        {
            if(n % i == 0)
                return false;
        }

        return true;
    }

    int countPrimes(int n) {

        int count = 0;

        for(int i = 2; i < n; i++)
        {
            if(function(i))
            {
                count++;
            }
        }

        return count;
    }
};