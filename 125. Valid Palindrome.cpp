class Solution {
public:
    bool isPalindrome(string s) {
    string ans="";
    for(char x: s)
    {
        if(x>='A' && x<='Z' || x>='a' && x<='z' || x>='0' && x<='9')
        {
            ans+=tolower(x);
        }
    }

    int i=0;
    int j=ans.size()-1;
    bool found=true;

  

    while(i<j)
    {

        if(ans[i]!=ans[j])
        {
            return false;
        }
        i++;
        j--;
    }
        
    return found;
    }

    
};