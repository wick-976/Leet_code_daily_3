class Solution {
public:
    int secondHighest(string s) {

        int fn=-1;
        int sn=-1;
        for(char c:s)
        {
            if(isdigit(c))
            {   
               int d= c - '0';

               if(d > fn)
               {
                    sn=fn;
                    fn=d;
               }
               else if(d > sn && d != fn)
               {
                    sn=d;
               }
            }
        }


    return sn;
        
    }
};