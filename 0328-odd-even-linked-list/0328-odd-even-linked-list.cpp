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
    ListNode* oddEvenList(ListNode* head) {
        
        if( head == NULL || head -> next == NULL || head -> next -> next == NULL ) return head ;

        ListNode* even = new ListNode( head -> val ) ;
        ListNode* evenHead = even ;
        ListNode* odd = new ListNode( head -> next -> val ) ;
        ListNode* oddHead = odd ;
        
        int count = 0 ;

        ListNode* temp = head ;

        while( temp != NULL ){
            ListNode* newNode = new ListNode(temp->val);
            if( count % 2 == 0 ){
                even -> next = newNode ;
                even = newNode ;
            }
            else{
                odd -> next = newNode ;
                odd = newNode ;
            }
            count ++ ;
            temp = temp -> next ;
        }

        evenHead = evenHead -> next ;
        oddHead = oddHead -> next ;

        even -> next = oddHead ;

        return evenHead ;
    }
};