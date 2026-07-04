class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;

        if (n < 0)
        {
            long long power = n;   // int -> long long
            power = -power;        // now INT_MIN can safely become positive

            double fact = 1 / pow(x, power);
            return fact;
        }

        while (n > 0)
        {
            if (n & 1)
            {
                res *= x;
            }

            x *= x;
            n >>= 1;
        }

        return res;
    }
};