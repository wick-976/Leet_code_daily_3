class Solution {
public:
    long long gcd(long long a, long long b) {
        while (b) {
            long long t = b;
            b = a % b;
            a = t;
        }
        return a;
    }

    long long lcm(long long a, long long b) {
        return a / gcd(a, b) * b;
    }

    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            long long prod = 1;
            long long g = 0;
            long long l = 1;

            for (int j = i; j < n; j++) {

                // Prevent overflow
                if (prod > LLONG_MAX / nums[j])
                    break;

                prod *= nums[j];

                g = (g == 0) ? nums[j] : gcd(g, nums[j]);
                l = lcm(l, nums[j]);

                if (l > LLONG_MAX / max(1LL, g))
                    continue;

                if (prod == g * l)
                    ans = max(ans, j - i + 1);
            }
        }

        return ans;
    }
};