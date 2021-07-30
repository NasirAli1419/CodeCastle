//https://leetcode.com/problems/add-two-numbers/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode * temp1 = l1 ;
        ListNode * temp2 = l2 ;
        
        ListNode * result= new ListNode(0);
        ListNode * pointer = result;
        
        int carry = 0;
        
        while(temp1!=NULL || temp2!=NULL){
            
            if(temp1!=NULL && temp2!=NULL){
                
                int sum = temp1->val + temp2->val + carry;
                
                pointer->next = new ListNode(sum%10);
                pointer=pointer->next;
                
                carry=sum/10;
                temp1=temp1->next;
                temp2=temp2->next;
                
            }
            
           else if(temp1!=NULL){
                
                int sum = temp1->val + carry;
                pointer->next = new ListNode(sum%10);
                pointer=pointer->next;
                temp1=temp1->next;
                carry=sum/10;
                
            }
            
           else if(temp2!=NULL){
                int sum = temp2->val + carry;
                pointer->next = new ListNode(sum%10);
                pointer=pointer->next;
                temp2=temp2->next;
                carry=sum/10;
                
            }
            
        }
        
        if(carry){
            pointer->next=new ListNode(carry);
        }
        
      return result->next;
        
    }
};
