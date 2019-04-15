//
// Created by authetic on 2019/4/15.
//

/*
 * 合并两个有序链表
 * 类似于归并排序的循环操作
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* tmp = head;
        while (l1 != NULL && l2 != NULL) {
            if (l1->val < l2->val) {
                tmp->next = l1;
                tmp = tmp->next;
                l1 = l1->next;
            } else {
                tmp->next = l2;
                tmp = tmp->next;
                l2 = l2->next;
            }
        }
        while (l1 != NULL) {
            tmp->next = l1;
            tmp = tmp->next;
            l1 = l1->next;
        }
        while (l2 != NULL) {
            tmp->next = l2;
            tmp = tmp->next;
            l2 = l2->next;
        }
        return head->next;
    }
};