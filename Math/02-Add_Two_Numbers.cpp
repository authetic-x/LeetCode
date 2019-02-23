//
// Created by authetic on 2019/2/23.
//

/*
 * Basic linkedlist operation.
 */

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(0);
        ListNode *p = l1, *q = l2, *curr = res;
        int carry = 0;
        while(p != NULL || q != NULL) {
            int x = (p != NULL) ? p->val : 0;
            int y = (q != NULL) ? q->val : 0;
            int sum = carry + x + y;
            carry = sum / 10;
            ListNode* node = new ListNode(sum % 10);
            curr->next = node;
            curr = node;
            if(p != NULL) p = p->next;
            if(q != NULL) q = q->next;
        }
        if (carry != 0) {
            ListNode* node = new ListNode(carry);
            curr->next = node;
        }
        return res->next;
    }
};