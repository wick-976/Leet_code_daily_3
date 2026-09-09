class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head) return nullptr;

        vector<int> arr;

     
        ListNode* i = head;
        while (i) {
            arr.push_back(i->val);
            if (i->next) i = i->next->next;
            else break;
        }

  
        i = head->next;
        while (i) {
            arr.push_back(i->val);
            if (i->next) i = i->next->next;
            else break;
        }

        // Rebuild list
        ListNode* header = nullptr;
        ListNode* tail = nullptr;
        for (int v : arr) {
            ListNode* nn = new ListNode(v);
            if (!header) {
                header = nn;
                tail = nn;
            } else {
                tail->next = nn;
                tail = nn;
            }
        }

        return header;
    }
};
