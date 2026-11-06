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




//change the values in the same place without taking any 
//extra space 

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
      
        if(head==nullptr||head->next==nullptr) return head;

        ListNode* odd=head;

        ListNode* even=head->next;

        ListNode* evenhead=head->next;
        while(even!=nullptr && even->next!=nullptr)
        {
            odd->next=odd->next->next;
            even->next=even->next->next;

            odd=odd->next;
            even=even->next;

        }
        odd->next=evenhead;
        return head;

       }
    
};
