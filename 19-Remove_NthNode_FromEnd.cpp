//
// Created by authetic on 2019/4/15.
//

/*
 * 从链表末尾开始移除第N个结点
 * 先求长度，再找到该结点的前一个结点
 * 第一次双100%，舒服！^=^
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* tmp = head;
        while (tmp != NULL) {
            tmp = tmp->next;
            len++;
        }
        if (len - n - 1 == -1) {
            return head->next;
        } else {
            int cnt;
            tmp = head;
            for (cnt = 0; cnt < len-n-1; cnt++) {
                tmp = tmp->next;
            }
            tmp->next = tmp->next->next;
            return head;
        }
        return NULL;
    }
};