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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        unordered_set<int> s1(nums.begin(), nums.end());
   
        while (head && s1.find(head->val) != s1.end()) {
            // ListNode* dltHead = head;
            head = head->next;
            // delete dltHead;
        }
        if (!head)
            return nullptr;
        ListNode* prev = head;
        ListNode* curr = head->next;
        while (curr) {
            if (s1.find(curr->val) != s1.end()) {
                // ListNode* temp = curr;
                prev->next = curr->next;
                curr = prev->next;
                // delete temp;
                
               
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};