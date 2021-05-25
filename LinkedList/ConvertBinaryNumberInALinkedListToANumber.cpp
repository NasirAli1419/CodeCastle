//link for problem ->  https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

int getDecimalValue(ListNode* head) {
        int length=0;
        int number=0;
        ListNode* temp = head;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
       temp=head;
        length--;
       while(temp!=NULL){
           number+=temp->val*pow(2,length--);
           temp=temp->next;
       } 
        return number;
    }s