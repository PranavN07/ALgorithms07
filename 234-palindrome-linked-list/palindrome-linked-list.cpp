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
        vector<int> listval;
        while(head){
            listval.push_back(head->val);
            head = head->next;
        }
        int n = listval.size();
        int right =0,left = n-1;
        while(right<left){
            if(listval[right] != listval[left]){
                return false;
            }
            right++;
            left--;
        }
        return true;
    }
};