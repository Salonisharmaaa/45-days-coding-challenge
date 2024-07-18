class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* ptr = head;
        int res = 0;

        while(ptr != NULL){
            res = res*2 + ptr->val;
            ptr = ptr->next;
        }

        return res;
    }
};
