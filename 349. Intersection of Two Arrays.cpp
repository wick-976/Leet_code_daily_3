//actually it is the better solution we wrriiten here
//but we want to improve this we'll use the set and unordered set to improve the solution
//but there is learnig in that solution hence it will improve the solution but we cab still
//improve the time complexity of the solution by using the set and unordered
// set to improve the solution where our better solution is O(n log n) beacuse of the map
//but in set O(n+m)
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
      map<int,int>ans;

       vector<int>answer;

       for(int i=0;i<nums1.size();i++)
       {
            ans[nums1[i]]++;
       }

       for(int i=0;i<nums2.size();i++)
       {
            if(ans[nums2[i]]>=1)
            {
                answer.push_back(nums2[i]);
                ans[nums2[i]]=0;
            }
       }
    return answer;
    }
};