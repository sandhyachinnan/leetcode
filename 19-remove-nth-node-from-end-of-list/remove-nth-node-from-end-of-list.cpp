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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* t = dummy;
        ListNode* r = dummy;

        for(int i = 0; i < n; i++) {
            r = r->next;
        }

        while(r->next != NULL) {
            t= t->next;
            r = r->next;
        }

        t->next = t->next->next;

        return dummy->next;
    }
    
};