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
    ListNode* deleteMiddle(ListNode* head) {
        
        if( head == NULL || head -> next == NULL ) return NULL ;
        if( head -> next -> next == NULL ){
            head -> next = NULL ;
            return head ;
        }

        int nodes = 0 ;
        ListNode* temp = head ;

        while( temp != NULL ){
            temp = temp -> next ;
            nodes += 1 ;
        }

        int count = 0 ;
        temp = head ;
        while( count != nodes / 2 - 1 ){
            temp = temp -> next ;
            count ++ ;
        }

        temp -> next = temp -> next -> next ;

        return head ;
    }
};