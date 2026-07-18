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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if( head == NULL || head -> next == NULL ) return head ;

        unordered_map<int,int> MAP ;
        ListNode* temp = head ;

        while( temp != NULL ){
            MAP[temp->val] ++ ;
            temp = temp -> next ;
        }

        ListNode* resultHead = NULL ;
        ListNode* result = NULL ;
        temp = head ;

        while( temp != NULL ){
            if( MAP[temp->val] == 1 ){
                
                ListNode* newNode = new ListNode( temp -> val );
                if( resultHead == NULL ){
                    resultHead = newNode ;
                    result = newNode ;
                }
                else{
                    result -> next = newNode ;
                    result = result -> next ;
                }
                
                
            }
            temp = temp -> next ;
        }

        return resultHead ;
    }
};