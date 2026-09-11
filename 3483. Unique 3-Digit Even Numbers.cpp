class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<bool>arr(1000,false);

        for(int i=0;i<digits.size();i++)
        {
            if(digits[i]==0)
            {
                continue;
            }
            for(int j=0;j<digits.size();j++)
            {
                if(j==i) continue;
                for(int k=0;k<digits.size();k++)
                {
                    if(k==i || k==j) continue;
                    int num=(digits[i]*100 +digits[j]*10+digits[k]);
                    if(num%2==0)
                    {
                        arr[num]=true;
                    }
                }
            }
        }
        int count=0;

        for(bool x:arr)
        {
            if(x) count++;
        }

        return count;

    }
};