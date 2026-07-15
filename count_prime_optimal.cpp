class Solution {
public:
    int countPrimes(int n) {

        if(n<=2)
        {
            return 0;
        }
        vector<bool>isPrime(n+1,true);
        int count=1;

        for(int i=3;i*i<=n;i+=2)
        {
            if(isPrime[i])
            {
                count++;
                for(int mul=i*i;mul<n;mul+=i) isPrime[mul]=false;
            }
        }

        int root=sqrt(n);
        int odd_sqrt=root+ ((root%2==1)?2:1);
        for(int i=odd_sqrt;i<n;i+=2) count+=isPrime[i];
        return count;



    }
};