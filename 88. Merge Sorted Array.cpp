//it is a optimal solution yet we used the wxtra spcae O(m+n) 
//but we can avoid this extra space by mergint the array from back of the nums1.


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int i=0;
         int z=0;
         vector<int>ans;

         while(i<m && z<n)
         {
            if(nums1[i]<=nums2[z])
            {
                ans.push_back(nums1[i]);
                i++;
            }
            else
            {
                ans.push_back(nums2[z]);
                z++;
            }
         }

         while(i<m)
         {
            ans.push_back(nums1[i]);
            i++;
         }  
         while(z<n)
         {
            ans.push_back(nums2[z]);
            z++;
         }  

        nums1=ans;  
    }
};