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
    ListNode* middleNode(ListNode* head) {


        //brute force for this would be

        ListNode* i=head;

        vector<ListNode*>arr;

        while(i != nullptr)
        {
            arr.push_back(i);
            i=i->next;
        }

        return arr[arr.size()/2];
        

        //now we move to the optimal

        ListNode* i=head;

        int size=0;

        while(i != NULL)
        {
            size++;
            i=i->next;
        }
        i=head;
        for(int j=0;j<size/2;j++)
        {
            i=i->next;
        }
        

    return i;
    }


    "Tortoise hair algorithm or slow and fast poiter"

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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;

        while(fast != NULL && fast->next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        return slow;

    }
};
};