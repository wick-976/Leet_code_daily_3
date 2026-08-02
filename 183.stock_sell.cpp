class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximum=-1;
        int mins=prices[0];

        for(int i=1;i<prices.size();i++)
        {
            maximum=max(maximum,prices[i]-mins);
            mins=min(mins,prices[i]);
        }

        return maximum== - 1 ?0:maximum;
    }
};