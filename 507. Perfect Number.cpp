class Solution {
public:
    bool checkPerfectNumber(int num) {
        int og=num;
        vector<int>add;
        for(long long i=1;i*i<=num;i++)
        {
            if(num%i==0)
            {
                add.push_back(i);
                
            }
            if((i*i)!=num && num%i==0)
            {
                add.push_back(num/i);
            }
            

        }

        int total=accumulate(add.begin(),add.end(),0);

        if(total-og==(og))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};