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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        vector<int> arr;
        ListNode* temp = head;
        while (temp) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int n = arr.size();
        k = k % n; 

        
        vector<int> rotated;
        rotated.insert(rotated.end(), arr.end() - k, arr.end()); 
        rotated.insert(rotated.end(), arr.begin(), arr.end() - k);

        ListNode* newHead = new ListNode(rotated[0]);
        ListNode* curr = newHead;
        for (int i = 1; i < rotated.size(); i++) {
            curr->next = new ListNode(rotated[i]);
            curr = curr->next;
        }

        return newHead;
    }
};
