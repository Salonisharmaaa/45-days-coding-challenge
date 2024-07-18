class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;
        ListNode* fast = head->next;
        ListNode* slow = head;

        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
            }

            slow = slow->next;

            if(fast == slow)
                return true;
        }
        return false;
    }
};
