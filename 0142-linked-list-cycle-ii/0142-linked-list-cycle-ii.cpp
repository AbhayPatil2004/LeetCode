/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        unordered_set<ListNode*> SET ;

        ListNode* temp = head ;

        while( temp != NULL ){

            if( SET.count(temp) ){
                return temp ;
            }
            SET.insert(temp) ;
            temp = temp -> next ;
        }

        return NULL ;
    }
};