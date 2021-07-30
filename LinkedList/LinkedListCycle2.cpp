/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 //https://leetcode.com/problems/linked-list-cycle-ii/
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(!head) return NULL;
        
        unordered_map<ListNode*,int> map;
        
        ListNode* temp=head;
        
        while(temp!=NULL){
            
            if(map.find(temp) != map.end()){
                return temp;
            }
            else{
                 map[temp]++;
                 temp=temp->next;
            }
            
        }
        
      return NULL;
    }
};
