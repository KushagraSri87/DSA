class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head == NULL || left == right){
            return head;
        }

        ListNode* prev = NULL;
        ListNode* curr = head;

        // Move curr to the left position
        for(int i = 1; i < left; i++){
            prev = curr;
            curr = curr->next;
        }

        // Save these before reversing
        ListNode* before = prev;
        ListNode* leftNode = curr;

        // Reverse from left to right
        for(int i = 0; i < right - left + 1; i++){
            ListNode* next = curr->next;

            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Connect the end of reversed part to remaining list
        leftNode->next = curr;

        // If left is 1, prev is the new head
        if(before == NULL){
            head = prev;
        }
        else{
            // Connect node before left to new beginning
            before->next = prev;
        }

        return head;
    }
};