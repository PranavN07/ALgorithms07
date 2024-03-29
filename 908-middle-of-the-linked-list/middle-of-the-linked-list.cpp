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
        ListNode* temp = head->next;
        ListNode* mid = head;
        while(temp != NULL){
           mid = mid->next;
           if(temp->next == NULL){
              break;
           }
           temp = temp->next->next;
        }
        return mid;


    }
};