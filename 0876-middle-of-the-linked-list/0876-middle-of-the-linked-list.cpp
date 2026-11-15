/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL) return head;
        int length=1;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            length++;
        }
        temp=head;
        int count=1;
        while(count!=length/2){
            temp=temp->next;
            count++;
        }
        if(length%2!=0){
            return temp->next;
        }
        else{
            return temp;
        }
        
    }
};