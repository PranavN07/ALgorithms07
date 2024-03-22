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
    bool isPalindrome(ListNode* head) {
       vector<int> listv;
       while(head){
        listv.push_back(head->val);
        head = head->next;
       }
       int left=0,right=listv.size()-1;
       while(left<right && listv[left] == listv[right]){
         left++;
         right--;
       }
       return left>=right;
    }
};