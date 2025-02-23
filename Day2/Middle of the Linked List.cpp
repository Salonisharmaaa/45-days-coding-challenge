class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            fast = fast->next;
            if(fast->next != NULL)
                fast = fast->next;
            
            slow = slow->next;
        }
        return slow;
    }
};
