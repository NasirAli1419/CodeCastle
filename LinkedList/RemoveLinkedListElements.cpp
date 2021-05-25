//link for problem ->  https://leetcode.com/problems/remove-linked-list-elements/

   ListNode* removeElements(ListNode* head, int val) {
        
        
        if(!head){
            return NULL;
        }
        
        while(head && head->val==val){
            head=head->next;
        }
        
        if(!head){
            return NULL;
        }
        
        ListNode * temp = head;
        ListNode * prev = head;
        temp=temp->next;
        
        while(temp!=NULL){
            
            if(temp->val==val){
                prev->next=temp->next;
                temp=temp->next;
            }
            else{
                temp=temp->next;
                prev=prev->next;
            }
            
        }
        return head;
    }