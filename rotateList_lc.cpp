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

        if (!head) return head; //base case
        ListNode* p = head; //p is currently pointing to where head is pointing.
        int l=1; //initial length is 1 since head is not null
        while (p->next){ //to calculate the length of the linked list
            l++;
            p=p->next;
        }
        p->next = head; //p->next is pointing to head, this means now we have a cycle.
        k = k % l; //we take mod when k is greater than l , it rotates accordingly
        for (int i = 0;i<=l-k-1; i++) p=p->next; //we move till l-k-1
        head = p->next; //where we want to start after k rotations
        p->next = NULL; //break the cycle.
        return head; //return this new head.
    }
};
