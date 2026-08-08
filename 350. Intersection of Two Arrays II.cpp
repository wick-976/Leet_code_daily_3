//this is definetly not a good solution but it works for now this i can provide 
//for the knowledge i have right now i will improve this

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> ans;
        int i = 0, z = 0;

        while(i < nums1.size() && z < nums2.size()) {
            if(nums1[i] == nums2[z]) {
                ans.push_back(nums1[i]);
                i++;
                z++;
            }
            else if(nums1[i] < nums2[z]) {
                i++;
            }
            else {
                z++;
            }
        }
        return ans;
    }
};
