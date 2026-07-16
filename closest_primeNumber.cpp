class Solution {
public:
    vector<int> closestPrimes(int left, int right) {

        vector<int> ans;
        vector<bool> isPrime(right + 1, true);

        isPrime[0] = false;
        if (right >= 1)
            isPrime[1] = false;

        if (left <= 2 && right >= 2)
        {
            ans.push_back(2);
        }

        for (int i = 3; i * i <= right; i += 2)
        {
            if (isPrime[i])
            {
                if (i >= left)
                {
                    ans.push_back(i);
                }

                for (int mul = i * i; mul <= right; mul += i)
                {
                    isPrime[mul] = false;
                }
            }
        }

        int root = sqrt(right);
        int odd_sqrt = root + ((root % 2 == 0) ? 1 : 2);

        for (int i = odd_sqrt; i <= right; i += 2)
        {
            if (isPrime[i])
            {
                if (i >= left)
                {
                    ans.push_back(i);
                }
            }
        }

        if (ans.size() < 2)
        {
            return {-1, -1};
        }

        int minimum = INT_MAX;
        int index1 = -1;
        int index2 = -1;

        for (int i = 1; i < ans.size(); i++)
        {
            int subtraction = ans[i] - ans[i - 1];

            if (subtraction < minimum)
            {
                minimum = subtraction;
                index1 = ans[i - 1];
                index2 = ans[i];
            }
        }

        return {index1, index2};
    }
};