//https://www.geeksforgeeks.org/add-1-number-represented-linked-list/

class Solution
{
    public:
    
    int getCarry(Node * head){
        
        if(head==NULL){
            return 1;
        }
        
        int result = head->data + getCarry(head->next);
        
        head->data = result % 10;
        
        return result / 10 ;
        
    }
    
    
    
    Node* addOne(Node *head) 
    {
        
        int carry = getCarry(head);
        
        if(carry){
            
            Node *node = new Node(carry);
            node->next=head;
            head=node;
            
        }
        
        return head;
        
    }
};

