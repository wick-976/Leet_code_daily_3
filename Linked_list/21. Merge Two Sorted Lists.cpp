class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy;              // dummy node object
        ListNode* tail = &dummy;     // tail pointer starts at dummy

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                tail->next = list1;  // attach list1 node
                list1 = list1->next;
            } else {
                tail->next = list2;  // attach list2 node
                list2 = list2->next;
            }
            tail = tail->next;       // move tail forward
        }


        tail->next = (list1 != nullptr) ? list1 : list2;

        return dummy.next;           
    }
};
