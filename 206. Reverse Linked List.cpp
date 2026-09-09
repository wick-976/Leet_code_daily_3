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
    ListNode* reverseList(ListNode* head) {

        ListNode* curr_head=head;

        ListNode* prev=nullptr;

        while(curr_head != nullptr)
        {
            ListNode* nn=curr_head->next;
            curr_head->next=prev;
            prev=curr_head;
            curr_head=nn;
        }

        return prev;
        
    }
};