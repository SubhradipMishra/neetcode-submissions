

class Solution {
public:

    ListNode* helper(ListNode* head){
        ListNode* temp = head ;
        ListNode* prev = NULL ;
        while(temp){
            ListNode* x = temp->next ;
            temp->next = prev ; 
            prev = temp ;
            temp = x ; 
        }
        return prev ;
    }
    ListNode* reverseList(ListNode* head) {
        if(!head) return NULL ; 

       return  helper(head);
        
    }
};
