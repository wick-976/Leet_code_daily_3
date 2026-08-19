class Solution {
public:
    bool validDigit(int n, int x) {
        
        string s=to_string(n);
        string t=to_string(x);

        bool check=false;
        if(s[0] != t[0])
        {
            check=true;
        }

        for(int i=0;i<s.size();i++)
        {
            if(s[i]==t[0] && check)
            {
                return true;
            }
        }

    return false;
        
    }
};