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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
    ListNode *dummy = new ListNode(0,head),*pre = dummy ,*cur ,*nex;
          for(int i =0;i<left - 1;i++)
          {
              pre = pre -> next;
          }
          cur=pre->next;
          for(int i =0;i<right -left;i++)
          {
              nex=cur->next;
              cur->next=nex->next;
              nex -> next = pre->next;
              pre->next=nex;
          }
          return dummy -> next;
      
    }
};
