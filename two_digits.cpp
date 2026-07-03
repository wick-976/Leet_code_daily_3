class Solution {
public:
    int addDigits(int num) {
        
        while(num>=10)
        {
            int sum=0;
            while(num>0)
            {
                sum+=num%10;
                num/=10;
            }
        num=sum;
        }
       return num;
        
    }
};


// here time complecity is O(1).  
//outer loop is O(9) and Inner loop is O(d). total is O(1)
//here we have to add the every digit of the number until we get a single digit number.