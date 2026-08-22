class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int digit_sum=0,digit_product=1,rem,sum=0;
        while(n>0){
            rem=n%10;
            digit_sum=digit_sum+rem;
            digit_product=digit_product*rem;
            n=n/10;
        }
        sum=digit_sum+digit_product;
        if(temp%sum==0){
            return true;

        }
        return false;
    }
};