/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

"BRUTE FORCE"
class Solution {
public:
    bool hasCycle(ListNode *head) {

        unordered_map<ListNode*,int>mp;

        ListNode* temp=head;

        while(temp != NULL)
        {
            if(mp[temp] >0)
            {
                return true;
            }

            mp[temp]++;
            temp=temp->next;

        }

        
    return false;
        
    }
};

"Optimal "

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

        ListNode* rabbit=head;
        ListNode* tortoise=head;

        while(rabbit != NULL && rabbit->next != NULL)
        {
            tortoise=tortoise->next;
            rabbit=rabbit->next->next;

            if(tortoise == rabbit) return true;
        }

    return false;
        
    }
};


"FOLLOW UP"

"Consider:
If you needed to find the exact starting node of the cycle, how would you adjust this two-pointer strategy?"