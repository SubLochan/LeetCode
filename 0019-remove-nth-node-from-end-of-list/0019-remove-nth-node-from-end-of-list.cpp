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
        ListNode dummy(0,head);
        ListNode* f = &dummy;
        ListNode* s = &dummy;

        for(int i = 0 ; i <=n ; i++){
            f = f -> next;
        }
        while(f  != nullptr){
            f = f -> next;
            s = s -> next;
        }
        ListNode* del = s -> next;
        s -> next = s -> next -> next;
        delete del;
        return dummy.next;
    }
};