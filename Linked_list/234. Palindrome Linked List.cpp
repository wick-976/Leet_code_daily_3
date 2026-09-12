/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {

        if(head==NULL || head->next==NULL) return true;


        vector<int>arr;

        ListNode* i=head;

        while(i !=NULL)
        {
            arr.push_back(i->val);
            i=i->next;
        }

        int j=0;
        int k=arr.size()-1;

        while(j<=k)
        {
            if(arr[j] != arr[k]) return false;
            j++;
            k--;
        }
        
    return true;
    }
};