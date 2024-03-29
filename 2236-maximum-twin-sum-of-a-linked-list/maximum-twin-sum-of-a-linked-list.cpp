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
    int pairSum(ListNode* head) {
        vector<int> data;
        ListNode* temp=head;
        if(head==NULL){
            return 0;
        }
        while(temp != NULL){
           data.push_back(temp->val);
           temp = temp->next;
        }
        int n = data.size();
        int i=0;
        int j=n-1;
        int curr = 0;
        int maxsum = -999;
        while(i<j){
            curr = data[i]+data[j];
            maxsum = max(curr,maxsum);
            i++;
            j--;
        }
        return maxsum;

    }
};